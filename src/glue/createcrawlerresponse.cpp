/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcrawlerresponse.h"
#include "createcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateCrawlerResponse
 * \brief The CreateCrawlerResponse class provides an interace for Glue CreateCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createCrawler
 */

/*!
 * Constructs a CreateCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCrawlerResponse::CreateCrawlerResponse(
        const CreateCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateCrawlerResponsePrivate(this), parent)
{
    setRequest(new CreateCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCrawlerRequest * CreateCrawlerResponse::request() const
{
    Q_D(const CreateCrawlerResponse);
    return static_cast<const CreateCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateCrawler \a response.
 */
void CreateCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateCrawlerResponsePrivate
 * \brief The CreateCrawlerResponsePrivate class provides private implementation for CreateCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateCrawlerResponsePrivate object with public implementation \a q.
 */
CreateCrawlerResponsePrivate::CreateCrawlerResponsePrivate(
    CreateCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateCrawler response element from \a xml.
 */
void CreateCrawlerResponsePrivate::parseCreateCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCrawlerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws

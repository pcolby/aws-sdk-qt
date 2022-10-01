// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

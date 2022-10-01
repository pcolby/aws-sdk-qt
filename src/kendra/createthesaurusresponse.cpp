/*
    Copyright 2013-2021 Paul Colby

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

#include "createthesaurusresponse.h"
#include "createthesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateThesaurusResponse
 * \brief The CreateThesaurusResponse class provides an interace for Kendra CreateThesaurus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createThesaurus
 */

/*!
 * Constructs a CreateThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
CreateThesaurusResponse::CreateThesaurusResponse(
        const CreateThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateThesaurusResponsePrivate(this), parent)
{
    setRequest(new CreateThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateThesaurusRequest * CreateThesaurusResponse::request() const
{
    Q_D(const CreateThesaurusResponse);
    return static_cast<const CreateThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateThesaurus \a response.
 */
void CreateThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateThesaurusResponsePrivate
 * \brief The CreateThesaurusResponsePrivate class provides private implementation for CreateThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateThesaurusResponsePrivate object with public implementation \a q.
 */
CreateThesaurusResponsePrivate::CreateThesaurusResponsePrivate(
    CreateThesaurusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateThesaurus response element from \a xml.
 */
void CreateThesaurusResponsePrivate::parseCreateThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

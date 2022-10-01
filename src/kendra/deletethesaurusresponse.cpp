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

#include "deletethesaurusresponse.h"
#include "deletethesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteThesaurusResponse
 * \brief The DeleteThesaurusResponse class provides an interace for Kendra DeleteThesaurus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteThesaurus
 */

/*!
 * Constructs a DeleteThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThesaurusResponse::DeleteThesaurusResponse(
        const DeleteThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteThesaurusResponsePrivate(this), parent)
{
    setRequest(new DeleteThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThesaurusRequest * DeleteThesaurusResponse::request() const
{
    Q_D(const DeleteThesaurusResponse);
    return static_cast<const DeleteThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteThesaurus \a response.
 */
void DeleteThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteThesaurusResponsePrivate
 * \brief The DeleteThesaurusResponsePrivate class provides private implementation for DeleteThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteThesaurusResponsePrivate object with public implementation \a q.
 */
DeleteThesaurusResponsePrivate::DeleteThesaurusResponsePrivate(
    DeleteThesaurusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteThesaurus response element from \a xml.
 */
void DeleteThesaurusResponsePrivate::parseDeleteThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

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

#include "updatethesaurusresponse.h"
#include "updatethesaurusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::UpdateThesaurusResponse
 * \brief The UpdateThesaurusResponse class provides an interace for kendra UpdateThesaurus responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::updateThesaurus
 */

/*!
 * Constructs a UpdateThesaurusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThesaurusResponse::UpdateThesaurusResponse(
        const UpdateThesaurusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new UpdateThesaurusResponsePrivate(this), parent)
{
    setRequest(new UpdateThesaurusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThesaurusRequest * UpdateThesaurusResponse::request() const
{
    Q_D(const UpdateThesaurusResponse);
    return static_cast<const UpdateThesaurusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful kendra UpdateThesaurus \a response.
 */
void UpdateThesaurusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThesaurusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::UpdateThesaurusResponsePrivate
 * \brief The UpdateThesaurusResponsePrivate class provides private implementation for UpdateThesaurusResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a UpdateThesaurusResponsePrivate object with public implementation \a q.
 */
UpdateThesaurusResponsePrivate::UpdateThesaurusResponsePrivate(
    UpdateThesaurusResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra UpdateThesaurus response element from \a xml.
 */
void UpdateThesaurusResponsePrivate::parseUpdateThesaurusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThesaurusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws

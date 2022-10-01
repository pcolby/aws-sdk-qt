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

#include "updateindexresponse.h"
#include "updateindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateIndexResponse
 * \brief The UpdateIndexResponse class provides an interace for Kendra UpdateIndex responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateIndex
 */

/*!
 * Constructs a UpdateIndexResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIndexResponse::UpdateIndexResponse(
        const UpdateIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateIndexResponsePrivate(this), parent)
{
    setRequest(new UpdateIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIndexRequest * UpdateIndexResponse::request() const
{
    Q_D(const UpdateIndexResponse);
    return static_cast<const UpdateIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateIndex \a response.
 */
void UpdateIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateIndexResponsePrivate
 * \brief The UpdateIndexResponsePrivate class provides private implementation for UpdateIndexResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateIndexResponsePrivate object with public implementation \a q.
 */
UpdateIndexResponsePrivate::UpdateIndexResponsePrivate(
    UpdateIndexResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateIndex response element from \a xml.
 */
void UpdateIndexResponsePrivate::parseUpdateIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

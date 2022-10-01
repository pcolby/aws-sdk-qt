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

#include "deleteindexresponse.h"
#include "deleteindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteIndexResponse
 * \brief The DeleteIndexResponse class provides an interace for Kendra DeleteIndex responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteIndex
 */

/*!
 * Constructs a DeleteIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIndexResponse::DeleteIndexResponse(
        const DeleteIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteIndexResponsePrivate(this), parent)
{
    setRequest(new DeleteIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIndexRequest * DeleteIndexResponse::request() const
{
    Q_D(const DeleteIndexResponse);
    return static_cast<const DeleteIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteIndex \a response.
 */
void DeleteIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteIndexResponsePrivate
 * \brief The DeleteIndexResponsePrivate class provides private implementation for DeleteIndexResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteIndexResponsePrivate object with public implementation \a q.
 */
DeleteIndexResponsePrivate::DeleteIndexResponsePrivate(
    DeleteIndexResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteIndex response element from \a xml.
 */
void DeleteIndexResponsePrivate::parseDeleteIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

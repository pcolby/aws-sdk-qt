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

#include "deletepartitionindexresponse.h"
#include "deletepartitionindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionIndexResponse
 * \brief The DeletePartitionIndexResponse class provides an interace for Glue DeletePartitionIndex responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deletePartitionIndex
 */

/*!
 * Constructs a DeletePartitionIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePartitionIndexResponse::DeletePartitionIndexResponse(
        const DeletePartitionIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeletePartitionIndexResponsePrivate(this), parent)
{
    setRequest(new DeletePartitionIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePartitionIndexRequest * DeletePartitionIndexResponse::request() const
{
    Q_D(const DeletePartitionIndexResponse);
    return static_cast<const DeletePartitionIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeletePartitionIndex \a response.
 */
void DeletePartitionIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePartitionIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeletePartitionIndexResponsePrivate
 * \brief The DeletePartitionIndexResponsePrivate class provides private implementation for DeletePartitionIndexResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeletePartitionIndexResponsePrivate object with public implementation \a q.
 */
DeletePartitionIndexResponsePrivate::DeletePartitionIndexResponsePrivate(
    DeletePartitionIndexResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeletePartitionIndex response element from \a xml.
 */
void DeletePartitionIndexResponsePrivate::parseDeletePartitionIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePartitionIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

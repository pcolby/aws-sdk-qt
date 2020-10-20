/*
    Copyright 2013-2020 Paul Colby

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

#include "deletepartitionresponse.h"
#include "deletepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionResponse
 * \brief The DeletePartitionResponse class provides an interace for Glue DeletePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deletePartition
 */

/*!
 * Constructs a DeletePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePartitionResponse::DeletePartitionResponse(
        const DeletePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeletePartitionResponsePrivate(this), parent)
{
    setRequest(new DeletePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePartitionRequest * DeletePartitionResponse::request() const
{
    Q_D(const DeletePartitionResponse);
    return static_cast<const DeletePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeletePartition \a response.
 */
void DeletePartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeletePartitionResponsePrivate
 * \brief The DeletePartitionResponsePrivate class provides private implementation for DeletePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeletePartitionResponsePrivate object with public implementation \a q.
 */
DeletePartitionResponsePrivate::DeletePartitionResponsePrivate(
    DeletePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeletePartition response element from \a xml.
 */
void DeletePartitionResponsePrivate::parseDeletePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

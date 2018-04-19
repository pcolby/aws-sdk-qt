/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getpartitionresponse.h"
#include "getpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionResponse
 * \brief The GetPartitionResponse class provides an interace for Glue GetPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getPartition
 */

/*!
 * Constructs a GetPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetPartitionResponse::GetPartitionResponse(
        const GetPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionResponsePrivate(this), parent)
{
    setRequest(new GetPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPartitionRequest * GetPartitionResponse::request() const
{
    Q_D(const GetPartitionResponse);
    return static_cast<const GetPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetPartition \a response.
 */
void GetPartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetPartitionResponsePrivate
 * \brief The GetPartitionResponsePrivate class provides private implementation for GetPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionResponsePrivate object with public implementation \a q.
 */
GetPartitionResponsePrivate::GetPartitionResponsePrivate(
    GetPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetPartition response element from \a xml.
 */
void GetPartitionResponsePrivate::parseGetPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws

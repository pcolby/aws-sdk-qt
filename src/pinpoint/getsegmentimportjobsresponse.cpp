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

#include "getsegmentimportjobsresponse.h"
#include "getsegmentimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentImportJobsResponse
 *
 * \brief The GetSegmentImportJobsResponse class encapsulates Pinpoint GetSegmentImportJobs responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getSegmentImportJobs
 */

/*!
 * @brief  Constructs a new GetSegmentImportJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentImportJobsResponse::GetSegmentImportJobsResponse(
        const GetSegmentImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentImportJobsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentImportJobsRequest(request));
    setReply(reply);
}

const GetSegmentImportJobsRequest * GetSegmentImportJobsResponse::request() const
{
    Q_D(const GetSegmentImportJobsResponse);
    return static_cast<const GetSegmentImportJobsRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetSegmentImportJobs response.
 *
 * @param  response  Response to parse.
 */
void GetSegmentImportJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSegmentImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetSegmentImportJobsResponsePrivate
 *
 * \brief Private implementation for GetSegmentImportJobsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSegmentImportJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSegmentImportJobsResponse instance.
 */
GetSegmentImportJobsResponsePrivate::GetSegmentImportJobsResponsePrivate(
    GetSegmentImportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetSegmentImportJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSegmentImportJobsResponsePrivate::parseGetSegmentImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentImportJobsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

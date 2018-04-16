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

#include "getjobsresponse.h"
#include "getjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobsResponse
 *
 * \brief The GetJobsResponse class encapsulates Glue GetJobs responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getJobs
 */

/*!
 * @brief  Constructs a new GetJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobsResponse::GetJobsResponse(
        const GetJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobsResponsePrivate(this), parent)
{
    setRequest(new GetJobsRequest(request));
    setReply(reply);
}

const GetJobsRequest * GetJobsResponse::request() const
{
    Q_D(const GetJobsResponse);
    return static_cast<const GetJobsRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetJobs response.
 *
 * @param  response  Response to parse.
 */
void GetJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetJobsResponsePrivate
 *
 * \brief Private implementation for GetJobsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobsResponse instance.
 */
GetJobsResponsePrivate::GetJobsResponsePrivate(
    GetJobsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobsResponsePrivate::parseGetJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws

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

#include "puteventselectorsresponse.h"
#include "puteventselectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::PutEventSelectorsResponse
 *
 * \brief The PutEventSelectorsResponse class provides an interace for CloudTrail PutEventSelectors responses.
 *
 * \ingroup CloudTrail
 *
 *  <fullname>AWS CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records AWS API calls for your AWS account and delivers log files to an Amazon S3
 *  bucket. The recorded information includes the identity of the user, the start time of the AWS API call, the source IP
 *  address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the AWS SDKs, which consist of libraries and sample code for various
 *  programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create
 *  programmatic access to AWSCloudTrail. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services
 * 
 *  page</a>> </note>
 * 
 *  See the <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS CloudTrail
 *  User Guide</a> for information about the data that is included with each AWS API call listed in the log
 *
 * \sa CloudTrailClient::putEventSelectors
 */

/*!
 * @brief  Constructs a new PutEventSelectorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEventSelectorsResponse::PutEventSelectorsResponse(
        const PutEventSelectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new PutEventSelectorsResponsePrivate(this), parent)
{
    setRequest(new PutEventSelectorsRequest(request));
    setReply(reply);
}

const PutEventSelectorsRequest * PutEventSelectorsResponse::request() const
{
    Q_D(const PutEventSelectorsResponse);
    return static_cast<const PutEventSelectorsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudTrail PutEventSelectors response.
 *
 * @param  response  Response to parse.
 */
void PutEventSelectorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutEventSelectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutEventSelectorsResponsePrivate
 *
 * \brief Private implementation for PutEventSelectorsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutEventSelectorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutEventSelectorsResponse instance.
 */
PutEventSelectorsResponsePrivate::PutEventSelectorsResponsePrivate(
    PutEventSelectorsResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudTrail PutEventSelectorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutEventSelectorsResponsePrivate::parsePutEventSelectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventSelectorsResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws

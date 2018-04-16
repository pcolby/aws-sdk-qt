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

#include "createtrailresponse.h"
#include "createtrailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CreateTrailResponse
 *
 * \brief The CreateTrailResponse class encapsulates CloudTrail CreateTrail responses.
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
 * \sa CloudTrailClient::createTrail
 */

/*!
 * @brief  Constructs a new CreateTrailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrailResponse::CreateTrailResponse(
        const CreateTrailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new CreateTrailResponsePrivate(this), parent)
{
    setRequest(new CreateTrailRequest(request));
    setReply(reply);
}

const CreateTrailRequest * CreateTrailResponse::request() const
{
    Q_D(const CreateTrailResponse);
    return static_cast<const CreateTrailRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudTrail CreateTrail response.
 *
 * @param  response  Response to parse.
 */
void CreateTrailResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTrailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateTrailResponsePrivate
 *
 * \brief Private implementation for CreateTrailResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrailResponse instance.
 */
CreateTrailResponsePrivate::CreateTrailResponsePrivate(
    CreateTrailResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudTrail CreateTrailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrailResponsePrivate::parseCreateTrailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrailResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws

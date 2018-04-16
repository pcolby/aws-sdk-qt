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

#include "describeeventtopicsresponse.h"
#include "describeeventtopicsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DescribeEventTopicsResponse
 *
 * \brief The DescribeEventTopicsResponse class encapsulates DirectoryService DescribeEventTopics responses.
 *
 * \ingroup DirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::describeEventTopics
 */

/*!
 * @brief  Constructs a new DescribeEventTopicsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventTopicsResponse::DescribeEventTopicsResponse(
        const DescribeEventTopicsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeEventTopicsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventTopicsRequest(request));
    setReply(reply);
}

const DescribeEventTopicsRequest * DescribeEventTopicsResponse::request() const
{
    Q_D(const DescribeEventTopicsResponse);
    return static_cast<const DescribeEventTopicsRequest *>(d->request);
}

/*!
 * @brief  Parse a DirectoryService DescribeEventTopics response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventTopicsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEventTopicsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeEventTopicsResponsePrivate
 *
 * \brief Private implementation for DescribeEventTopicsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEventTopicsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventTopicsResponse instance.
 */
DescribeEventTopicsResponsePrivate::DescribeEventTopicsResponsePrivate(
    DescribeEventTopicsResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectoryService DescribeEventTopicsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventTopicsResponsePrivate::parseDescribeEventTopicsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventTopicsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws

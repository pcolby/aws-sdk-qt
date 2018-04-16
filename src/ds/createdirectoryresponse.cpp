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

#include "createdirectoryresponse.h"
#include "createdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::CreateDirectoryResponse
 *
 * \brief The CreateDirectoryResponse class encapsulates DirectoryService CreateDirectory responses.
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
 * \sa DirectoryServiceClient::createDirectory
 */

/*!
 * @brief  Constructs a new CreateDirectoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectoryResponse::CreateDirectoryResponse(
        const CreateDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateDirectoryResponsePrivate(this), parent)
{
    setRequest(new CreateDirectoryRequest(request));
    setReply(reply);
}

const CreateDirectoryRequest * CreateDirectoryResponse::request() const
{
    Q_D(const CreateDirectoryResponse);
    return static_cast<const CreateDirectoryRequest *>(d->request);
}

/*!
 * @brief  Parse a DirectoryService CreateDirectory response.
 *
 * @param  response  Response to parse.
 */
void CreateDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDirectoryResponsePrivate
 *
 * \brief Private implementation for CreateDirectoryResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDirectoryResponse instance.
 */
CreateDirectoryResponsePrivate::CreateDirectoryResponsePrivate(
    CreateDirectoryResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectoryService CreateDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDirectoryResponsePrivate::parseCreateDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectoryResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws

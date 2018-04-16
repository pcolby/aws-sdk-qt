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

#include "deletesnapshotresponse.h"
#include "deletesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DeleteSnapshotResponse
 *
 * \brief The DeleteSnapshotResponse class provides an interace for DirectoryService DeleteSnapshot responses.
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
 * \sa DirectoryServiceClient::deleteSnapshot
 */

/*!
 * @brief  Constructs a new DeleteSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSnapshotResponse::DeleteSnapshotResponse(
        const DeleteSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteSnapshotRequest(request));
    setReply(reply);
}

const DeleteSnapshotRequest * DeleteSnapshotResponse::request() const
{
    Q_D(const DeleteSnapshotResponse);
    return static_cast<const DeleteSnapshotRequest *>(d->request);
}

/*!
 * @brief  Parse a DirectoryService DeleteSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteSnapshotResponsePrivate
 *
 * \brief Private implementation for DeleteSnapshotResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSnapshotResponse instance.
 */
DeleteSnapshotResponsePrivate::DeleteSnapshotResponsePrivate(
    DeleteSnapshotResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectoryService DeleteSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSnapshotResponsePrivate::parseDeleteSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSnapshotResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws

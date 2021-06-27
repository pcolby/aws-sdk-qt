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

#include "deletemounttargetresponse.h"
#include "deletemounttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DeleteMountTargetResponse
 * \brief The DeleteMountTargetResponse class provides an interace for EFS DeleteMountTarget responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
 *
 * \sa EfsClient::deleteMountTarget
 */

/*!
 * Constructs a DeleteMountTargetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMountTargetResponse::DeleteMountTargetResponse(
        const DeleteMountTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DeleteMountTargetResponsePrivate(this), parent)
{
    setRequest(new DeleteMountTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMountTargetRequest * DeleteMountTargetResponse::request() const
{
    return static_cast<const DeleteMountTargetRequest *>(EfsResponse::request());
}

/*!
 * \reimp
 * Parses a successful EFS DeleteMountTarget \a response.
 */
void DeleteMountTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMountTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DeleteMountTargetResponsePrivate
 * \brief The DeleteMountTargetResponsePrivate class provides private implementation for DeleteMountTargetResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DeleteMountTargetResponsePrivate object with public implementation \a q.
 */
DeleteMountTargetResponsePrivate::DeleteMountTargetResponsePrivate(
    DeleteMountTargetResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DeleteMountTarget response element from \a xml.
 */
void DeleteMountTargetResponsePrivate::parseDeleteMountTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMountTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws

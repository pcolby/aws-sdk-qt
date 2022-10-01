// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemounttargetresponse.h"
#include "deletemounttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteMountTargetResponse
 * \brief The DeleteMountTargetResponse class provides an interace for Efs DeleteMountTarget responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
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
    Q_D(const DeleteMountTargetResponse);
    return static_cast<const DeleteMountTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DeleteMountTarget \a response.
 */
void DeleteMountTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMountTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DeleteMountTargetResponsePrivate
 * \brief The DeleteMountTargetResponsePrivate class provides private implementation for DeleteMountTargetResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteMountTargetResponsePrivate object with public implementation \a q.
 */
DeleteMountTargetResponsePrivate::DeleteMountTargetResponsePrivate(
    DeleteMountTargetResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DeleteMountTarget response element from \a xml.
 */
void DeleteMountTargetResponsePrivate::parseDeleteMountTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMountTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspointresponse.h"
#include "deleteaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteAccessPointResponse
 * \brief The DeleteAccessPointResponse class provides an interace for Efs DeleteAccessPoint responses.
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
 * \sa EfsClient::deleteAccessPoint
 */

/*!
 * Constructs a DeleteAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPointResponse::DeleteAccessPointResponse(
        const DeleteAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DeleteAccessPointResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPointRequest * DeleteAccessPointResponse::request() const
{
    Q_D(const DeleteAccessPointResponse);
    return static_cast<const DeleteAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DeleteAccessPoint \a response.
 */
void DeleteAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DeleteAccessPointResponsePrivate
 * \brief The DeleteAccessPointResponsePrivate class provides private implementation for DeleteAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteAccessPointResponsePrivate object with public implementation \a q.
 */
DeleteAccessPointResponsePrivate::DeleteAccessPointResponsePrivate(
    DeleteAccessPointResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DeleteAccessPoint response element from \a xml.
 */
void DeleteAccessPointResponsePrivate::parseDeleteAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws

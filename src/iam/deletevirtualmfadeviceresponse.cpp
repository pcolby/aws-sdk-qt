// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevirtualmfadeviceresponse.h"
#include "deletevirtualmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteVirtualMFADeviceResponse
 * \brief The DeleteVirtualMFADeviceResponse class provides an interace for Iam DeleteVirtualMFADevice responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::deleteVirtualMFADevice
 */

/*!
 * Constructs a DeleteVirtualMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVirtualMFADeviceResponse::DeleteVirtualMFADeviceResponse(
        const DeleteVirtualMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteVirtualMFADeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteVirtualMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVirtualMFADeviceRequest * DeleteVirtualMFADeviceResponse::request() const
{
    Q_D(const DeleteVirtualMFADeviceResponse);
    return static_cast<const DeleteVirtualMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteVirtualMFADevice \a response.
 */
void DeleteVirtualMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVirtualMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteVirtualMFADeviceResponsePrivate
 * \brief The DeleteVirtualMFADeviceResponsePrivate class provides private implementation for DeleteVirtualMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteVirtualMFADeviceResponsePrivate object with public implementation \a q.
 */
DeleteVirtualMFADeviceResponsePrivate::DeleteVirtualMFADeviceResponsePrivate(
    DeleteVirtualMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteVirtualMFADevice response element from \a xml.
 */
void DeleteVirtualMFADeviceResponsePrivate::parseDeleteVirtualMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVirtualMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

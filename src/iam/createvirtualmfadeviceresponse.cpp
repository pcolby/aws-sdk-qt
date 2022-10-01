// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvirtualmfadeviceresponse.h"
#include "createvirtualmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateVirtualMFADeviceResponse
 * \brief The CreateVirtualMFADeviceResponse class provides an interace for Iam CreateVirtualMFADevice responses.
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
 * \sa IamClient::createVirtualMFADevice
 */

/*!
 * Constructs a CreateVirtualMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVirtualMFADeviceResponse::CreateVirtualMFADeviceResponse(
        const CreateVirtualMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateVirtualMFADeviceResponsePrivate(this), parent)
{
    setRequest(new CreateVirtualMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVirtualMFADeviceRequest * CreateVirtualMFADeviceResponse::request() const
{
    Q_D(const CreateVirtualMFADeviceResponse);
    return static_cast<const CreateVirtualMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateVirtualMFADevice \a response.
 */
void CreateVirtualMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVirtualMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateVirtualMFADeviceResponsePrivate
 * \brief The CreateVirtualMFADeviceResponsePrivate class provides private implementation for CreateVirtualMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateVirtualMFADeviceResponsePrivate object with public implementation \a q.
 */
CreateVirtualMFADeviceResponsePrivate::CreateVirtualMFADeviceResponsePrivate(
    CreateVirtualMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateVirtualMFADevice response element from \a xml.
 */
void CreateVirtualMFADeviceResponsePrivate::parseCreateVirtualMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVirtualMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

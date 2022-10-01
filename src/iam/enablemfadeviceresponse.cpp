// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablemfadeviceresponse.h"
#include "enablemfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::EnableMFADeviceResponse
 * \brief The EnableMFADeviceResponse class provides an interace for Iam EnableMFADevice responses.
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
 * \sa IamClient::enableMFADevice
 */

/*!
 * Constructs a EnableMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
EnableMFADeviceResponse::EnableMFADeviceResponse(
        const EnableMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new EnableMFADeviceResponsePrivate(this), parent)
{
    setRequest(new EnableMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableMFADeviceRequest * EnableMFADeviceResponse::request() const
{
    Q_D(const EnableMFADeviceResponse);
    return static_cast<const EnableMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam EnableMFADevice \a response.
 */
void EnableMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::EnableMFADeviceResponsePrivate
 * \brief The EnableMFADeviceResponsePrivate class provides private implementation for EnableMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a EnableMFADeviceResponsePrivate object with public implementation \a q.
 */
EnableMFADeviceResponsePrivate::EnableMFADeviceResponsePrivate(
    EnableMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam EnableMFADevice response element from \a xml.
 */
void EnableMFADeviceResponsePrivate::parseEnableMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivatemfadeviceresponse.h"
#include "deactivatemfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeactivateMFADeviceResponse
 * \brief The DeactivateMFADeviceResponse class provides an interace for Iam DeactivateMFADevice responses.
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
 * \sa IamClient::deactivateMFADevice
 */

/*!
 * Constructs a DeactivateMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivateMFADeviceResponse::DeactivateMFADeviceResponse(
        const DeactivateMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeactivateMFADeviceResponsePrivate(this), parent)
{
    setRequest(new DeactivateMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivateMFADeviceRequest * DeactivateMFADeviceResponse::request() const
{
    Q_D(const DeactivateMFADeviceResponse);
    return static_cast<const DeactivateMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeactivateMFADevice \a response.
 */
void DeactivateMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivateMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeactivateMFADeviceResponsePrivate
 * \brief The DeactivateMFADeviceResponsePrivate class provides private implementation for DeactivateMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeactivateMFADeviceResponsePrivate object with public implementation \a q.
 */
DeactivateMFADeviceResponsePrivate::DeactivateMFADeviceResponsePrivate(
    DeactivateMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeactivateMFADevice response element from \a xml.
 */
void DeactivateMFADeviceResponsePrivate::parseDeactivateMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

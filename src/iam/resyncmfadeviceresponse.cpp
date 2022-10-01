// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resyncmfadeviceresponse.h"
#include "resyncmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ResyncMFADeviceResponse
 * \brief The ResyncMFADeviceResponse class provides an interace for Iam ResyncMFADevice responses.
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
 * \sa IamClient::resyncMFADevice
 */

/*!
 * Constructs a ResyncMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ResyncMFADeviceResponse::ResyncMFADeviceResponse(
        const ResyncMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ResyncMFADeviceResponsePrivate(this), parent)
{
    setRequest(new ResyncMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResyncMFADeviceRequest * ResyncMFADeviceResponse::request() const
{
    Q_D(const ResyncMFADeviceResponse);
    return static_cast<const ResyncMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ResyncMFADevice \a response.
 */
void ResyncMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResyncMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ResyncMFADeviceResponsePrivate
 * \brief The ResyncMFADeviceResponsePrivate class provides private implementation for ResyncMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ResyncMFADeviceResponsePrivate object with public implementation \a q.
 */
ResyncMFADeviceResponsePrivate::ResyncMFADeviceResponsePrivate(
    ResyncMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ResyncMFADevice response element from \a xml.
 */
void ResyncMFADeviceResponsePrivate::parseResyncMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResyncMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagmfadeviceresponse.h"
#include "tagmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagMFADeviceResponse
 * \brief The TagMFADeviceResponse class provides an interace for Iam TagMFADevice responses.
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
 * \sa IamClient::tagMFADevice
 */

/*!
 * Constructs a TagMFADeviceResponse object for \a reply to \a request, with parent \a parent.
 */
TagMFADeviceResponse::TagMFADeviceResponse(
        const TagMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagMFADeviceResponsePrivate(this), parent)
{
    setRequest(new TagMFADeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagMFADeviceRequest * TagMFADeviceResponse::request() const
{
    Q_D(const TagMFADeviceResponse);
    return static_cast<const TagMFADeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagMFADevice \a response.
 */
void TagMFADeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagMFADeviceResponsePrivate
 * \brief The TagMFADeviceResponsePrivate class provides private implementation for TagMFADeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagMFADeviceResponsePrivate object with public implementation \a q.
 */
TagMFADeviceResponsePrivate::TagMFADeviceResponsePrivate(
    TagMFADeviceResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagMFADevice response element from \a xml.
 */
void TagMFADeviceResponsePrivate::parseTagMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagMFADeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

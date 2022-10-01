// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccesskeyresponse.h"
#include "updateaccesskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateAccessKeyResponse
 * \brief The UpdateAccessKeyResponse class provides an interace for Iam UpdateAccessKey responses.
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
 * \sa IamClient::updateAccessKey
 */

/*!
 * Constructs a UpdateAccessKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccessKeyResponse::UpdateAccessKeyResponse(
        const UpdateAccessKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateAccessKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccessKeyRequest * UpdateAccessKeyResponse::request() const
{
    Q_D(const UpdateAccessKeyResponse);
    return static_cast<const UpdateAccessKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateAccessKey \a response.
 */
void UpdateAccessKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccessKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateAccessKeyResponsePrivate
 * \brief The UpdateAccessKeyResponsePrivate class provides private implementation for UpdateAccessKeyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateAccessKeyResponsePrivate object with public implementation \a q.
 */
UpdateAccessKeyResponsePrivate::UpdateAccessKeyResponsePrivate(
    UpdateAccessKeyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateAccessKey response element from \a xml.
 */
void UpdateAccessKeyResponsePrivate::parseUpdateAccessKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

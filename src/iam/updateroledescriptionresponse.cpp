// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroledescriptionresponse.h"
#include "updateroledescriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateRoleDescriptionResponse
 * \brief The UpdateRoleDescriptionResponse class provides an interace for Iam UpdateRoleDescription responses.
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
 * \sa IamClient::updateRoleDescription
 */

/*!
 * Constructs a UpdateRoleDescriptionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoleDescriptionResponse::UpdateRoleDescriptionResponse(
        const UpdateRoleDescriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateRoleDescriptionResponsePrivate(this), parent)
{
    setRequest(new UpdateRoleDescriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoleDescriptionRequest * UpdateRoleDescriptionResponse::request() const
{
    Q_D(const UpdateRoleDescriptionResponse);
    return static_cast<const UpdateRoleDescriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateRoleDescription \a response.
 */
void UpdateRoleDescriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoleDescriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateRoleDescriptionResponsePrivate
 * \brief The UpdateRoleDescriptionResponsePrivate class provides private implementation for UpdateRoleDescriptionResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateRoleDescriptionResponsePrivate object with public implementation \a q.
 */
UpdateRoleDescriptionResponsePrivate::UpdateRoleDescriptionResponsePrivate(
    UpdateRoleDescriptionResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateRoleDescription response element from \a xml.
 */
void UpdateRoleDescriptionResponsePrivate::parseUpdateRoleDescriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoleDescriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

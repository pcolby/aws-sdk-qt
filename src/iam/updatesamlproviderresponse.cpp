// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesamlproviderresponse.h"
#include "updatesamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateSAMLProviderResponse
 * \brief The UpdateSAMLProviderResponse class provides an interace for Iam UpdateSAMLProvider responses.
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
 * \sa IamClient::updateSAMLProvider
 */

/*!
 * Constructs a UpdateSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSAMLProviderResponse::UpdateSAMLProviderResponse(
        const UpdateSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new UpdateSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSAMLProviderRequest * UpdateSAMLProviderResponse::request() const
{
    Q_D(const UpdateSAMLProviderResponse);
    return static_cast<const UpdateSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateSAMLProvider \a response.
 */
void UpdateSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateSAMLProviderResponsePrivate
 * \brief The UpdateSAMLProviderResponsePrivate class provides private implementation for UpdateSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateSAMLProviderResponsePrivate object with public implementation \a q.
 */
UpdateSAMLProviderResponsePrivate::UpdateSAMLProviderResponsePrivate(
    UpdateSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateSAMLProvider response element from \a xml.
 */
void UpdateSAMLProviderResponsePrivate::parseUpdateSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

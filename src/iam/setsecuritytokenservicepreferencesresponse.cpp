// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setsecuritytokenservicepreferencesresponse.h"
#include "setsecuritytokenservicepreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SetSecurityTokenServicePreferencesResponse
 * \brief The SetSecurityTokenServicePreferencesResponse class provides an interace for Iam SetSecurityTokenServicePreferences responses.
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
 * \sa IamClient::setSecurityTokenServicePreferences
 */

/*!
 * Constructs a SetSecurityTokenServicePreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
SetSecurityTokenServicePreferencesResponse::SetSecurityTokenServicePreferencesResponse(
        const SetSecurityTokenServicePreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new SetSecurityTokenServicePreferencesResponsePrivate(this), parent)
{
    setRequest(new SetSecurityTokenServicePreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetSecurityTokenServicePreferencesRequest * SetSecurityTokenServicePreferencesResponse::request() const
{
    Q_D(const SetSecurityTokenServicePreferencesResponse);
    return static_cast<const SetSecurityTokenServicePreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam SetSecurityTokenServicePreferences \a response.
 */
void SetSecurityTokenServicePreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetSecurityTokenServicePreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::SetSecurityTokenServicePreferencesResponsePrivate
 * \brief The SetSecurityTokenServicePreferencesResponsePrivate class provides private implementation for SetSecurityTokenServicePreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SetSecurityTokenServicePreferencesResponsePrivate object with public implementation \a q.
 */
SetSecurityTokenServicePreferencesResponsePrivate::SetSecurityTokenServicePreferencesResponsePrivate(
    SetSecurityTokenServicePreferencesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam SetSecurityTokenServicePreferences response element from \a xml.
 */
void SetSecurityTokenServicePreferencesResponsePrivate::parseSetSecurityTokenServicePreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetSecurityTokenServicePreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

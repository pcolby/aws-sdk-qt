// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsamlproviderresponse.h"
#include "getsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetSAMLProviderResponse
 * \brief The GetSAMLProviderResponse class provides an interace for Iam GetSAMLProvider responses.
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
 * \sa IamClient::getSAMLProvider
 */

/*!
 * Constructs a GetSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
GetSAMLProviderResponse::GetSAMLProviderResponse(
        const GetSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new GetSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSAMLProviderRequest * GetSAMLProviderResponse::request() const
{
    Q_D(const GetSAMLProviderResponse);
    return static_cast<const GetSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetSAMLProvider \a response.
 */
void GetSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetSAMLProviderResponsePrivate
 * \brief The GetSAMLProviderResponsePrivate class provides private implementation for GetSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetSAMLProviderResponsePrivate object with public implementation \a q.
 */
GetSAMLProviderResponsePrivate::GetSAMLProviderResponsePrivate(
    GetSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetSAMLProvider response element from \a xml.
 */
void GetSAMLProviderResponsePrivate::parseGetSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesskeylastusedresponse.h"
#include "getaccesskeylastusedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccessKeyLastUsedResponse
 * \brief The GetAccessKeyLastUsedResponse class provides an interace for Iam GetAccessKeyLastUsed responses.
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
 * \sa IamClient::getAccessKeyLastUsed
 */

/*!
 * Constructs a GetAccessKeyLastUsedResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessKeyLastUsedResponse::GetAccessKeyLastUsedResponse(
        const GetAccessKeyLastUsedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetAccessKeyLastUsedResponsePrivate(this), parent)
{
    setRequest(new GetAccessKeyLastUsedRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessKeyLastUsedRequest * GetAccessKeyLastUsedResponse::request() const
{
    Q_D(const GetAccessKeyLastUsedResponse);
    return static_cast<const GetAccessKeyLastUsedRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetAccessKeyLastUsed \a response.
 */
void GetAccessKeyLastUsedResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessKeyLastUsedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetAccessKeyLastUsedResponsePrivate
 * \brief The GetAccessKeyLastUsedResponsePrivate class provides private implementation for GetAccessKeyLastUsedResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccessKeyLastUsedResponsePrivate object with public implementation \a q.
 */
GetAccessKeyLastUsedResponsePrivate::GetAccessKeyLastUsedResponsePrivate(
    GetAccessKeyLastUsedResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetAccessKeyLastUsed response element from \a xml.
 */
void GetAccessKeyLastUsedResponsePrivate::parseGetAccessKeyLastUsedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessKeyLastUsedResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

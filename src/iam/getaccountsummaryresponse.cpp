// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountsummaryresponse.h"
#include "getaccountsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccountSummaryResponse
 * \brief The GetAccountSummaryResponse class provides an interace for Iam GetAccountSummary responses.
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
 * \sa IamClient::getAccountSummary
 */

/*!
 * Constructs a GetAccountSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountSummaryResponse::GetAccountSummaryResponse(
        const GetAccountSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetAccountSummaryResponsePrivate(this), parent)
{
    setRequest(new GetAccountSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountSummaryRequest * GetAccountSummaryResponse::request() const
{
    Q_D(const GetAccountSummaryResponse);
    return static_cast<const GetAccountSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetAccountSummary \a response.
 */
void GetAccountSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetAccountSummaryResponsePrivate
 * \brief The GetAccountSummaryResponsePrivate class provides private implementation for GetAccountSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccountSummaryResponsePrivate object with public implementation \a q.
 */
GetAccountSummaryResponsePrivate::GetAccountSummaryResponsePrivate(
    GetAccountSummaryResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetAccountSummary response element from \a xml.
 */
void GetAccountSummaryResponsePrivate::parseGetAccountSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

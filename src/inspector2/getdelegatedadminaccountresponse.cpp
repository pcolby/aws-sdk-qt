// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdelegatedadminaccountresponse.h"
#include "getdelegatedadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetDelegatedAdminAccountResponse
 * \brief The GetDelegatedAdminAccountResponse class provides an interace for Inspector2 GetDelegatedAdminAccount responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getDelegatedAdminAccount
 */

/*!
 * Constructs a GetDelegatedAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetDelegatedAdminAccountResponse::GetDelegatedAdminAccountResponse(
        const GetDelegatedAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new GetDelegatedAdminAccountResponsePrivate(this), parent)
{
    setRequest(new GetDelegatedAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDelegatedAdminAccountRequest * GetDelegatedAdminAccountResponse::request() const
{
    Q_D(const GetDelegatedAdminAccountResponse);
    return static_cast<const GetDelegatedAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 GetDelegatedAdminAccount \a response.
 */
void GetDelegatedAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDelegatedAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::GetDelegatedAdminAccountResponsePrivate
 * \brief The GetDelegatedAdminAccountResponsePrivate class provides private implementation for GetDelegatedAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetDelegatedAdminAccountResponsePrivate object with public implementation \a q.
 */
GetDelegatedAdminAccountResponsePrivate::GetDelegatedAdminAccountResponsePrivate(
    GetDelegatedAdminAccountResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 GetDelegatedAdminAccount response element from \a xml.
 */
void GetDelegatedAdminAccountResponsePrivate::parseGetDelegatedAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDelegatedAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws

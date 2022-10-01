// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enabledelegatedadminaccountresponse.h"
#include "enabledelegatedadminaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::EnableDelegatedAdminAccountResponse
 * \brief The EnableDelegatedAdminAccountResponse class provides an interace for Inspector2 EnableDelegatedAdminAccount responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::enableDelegatedAdminAccount
 */

/*!
 * Constructs a EnableDelegatedAdminAccountResponse object for \a reply to \a request, with parent \a parent.
 */
EnableDelegatedAdminAccountResponse::EnableDelegatedAdminAccountResponse(
        const EnableDelegatedAdminAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new EnableDelegatedAdminAccountResponsePrivate(this), parent)
{
    setRequest(new EnableDelegatedAdminAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableDelegatedAdminAccountRequest * EnableDelegatedAdminAccountResponse::request() const
{
    Q_D(const EnableDelegatedAdminAccountResponse);
    return static_cast<const EnableDelegatedAdminAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 EnableDelegatedAdminAccount \a response.
 */
void EnableDelegatedAdminAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableDelegatedAdminAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::EnableDelegatedAdminAccountResponsePrivate
 * \brief The EnableDelegatedAdminAccountResponsePrivate class provides private implementation for EnableDelegatedAdminAccountResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a EnableDelegatedAdminAccountResponsePrivate object with public implementation \a q.
 */
EnableDelegatedAdminAccountResponsePrivate::EnableDelegatedAdminAccountResponsePrivate(
    EnableDelegatedAdminAccountResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 EnableDelegatedAdminAccount response element from \a xml.
 */
void EnableDelegatedAdminAccountResponsePrivate::parseEnableDelegatedAdminAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDelegatedAdminAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws

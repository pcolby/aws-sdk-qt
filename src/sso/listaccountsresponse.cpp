// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountsresponse.h"
#include "listaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::ListAccountsResponse
 * \brief The ListAccountsResponse class provides an interace for Sso ListAccounts responses.
 *
 * \inmodule QtAwsSso
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) Portal is a web service that makes it easy for you to assign
 *  user access to IAM Identity Center resources such as the AWS access portal. Users can get AWS account applications and
 *  roles assigned to them and get federated into the
 * 
 *  application> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the IAM Identity Center Portal operations that you can call programatically and includes
 *  detailed information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to IAM Identity
 *  Center and other AWS services. For more information about the AWS SDKs, including how to download and install them, see
 *  <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoClient::listAccounts
 */

/*!
 * Constructs a ListAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountsResponse::ListAccountsResponse(
        const ListAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoResponse(new ListAccountsResponsePrivate(this), parent)
{
    setRequest(new ListAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountsRequest * ListAccountsResponse::request() const
{
    Q_D(const ListAccountsResponse);
    return static_cast<const ListAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sso ListAccounts \a response.
 */
void ListAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sso::ListAccountsResponsePrivate
 * \brief The ListAccountsResponsePrivate class provides private implementation for ListAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a ListAccountsResponsePrivate object with public implementation \a q.
 */
ListAccountsResponsePrivate::ListAccountsResponsePrivate(
    ListAccountsResponse * const q) : SsoResponsePrivate(q)
{

}

/*!
 * Parses a Sso ListAccounts response element from \a xml.
 */
void ListAccountsResponsePrivate::parseListAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sso
} // namespace QtAws

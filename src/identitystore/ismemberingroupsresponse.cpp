// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ismemberingroupsresponse.h"
#include "ismemberingroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::IsMemberInGroupsResponse
 * \brief The IsMemberInGroupsResponse class provides an interace for IdentityStore IsMemberInGroups responses.
 *
 * \inmodule QtAwsIdentityStore
 *
 *  The Identity Store service used by AWS IAM Identity Center (successor to AWS Single Sign-On) provides a single place to
 *  retrieve all of your identities (users and groups). For more information, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the identity store operations that you can call programatically and includes detailed
 *  information on data types and
 *
 * \sa IdentityStoreClient::isMemberInGroups
 */

/*!
 * Constructs a IsMemberInGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
IsMemberInGroupsResponse::IsMemberInGroupsResponse(
        const IsMemberInGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IdentityStoreResponse(new IsMemberInGroupsResponsePrivate(this), parent)
{
    setRequest(new IsMemberInGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IsMemberInGroupsRequest * IsMemberInGroupsResponse::request() const
{
    Q_D(const IsMemberInGroupsResponse);
    return static_cast<const IsMemberInGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IdentityStore IsMemberInGroups \a response.
 */
void IsMemberInGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(IsMemberInGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IdentityStore::IsMemberInGroupsResponsePrivate
 * \brief The IsMemberInGroupsResponsePrivate class provides private implementation for IsMemberInGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a IsMemberInGroupsResponsePrivate object with public implementation \a q.
 */
IsMemberInGroupsResponsePrivate::IsMemberInGroupsResponsePrivate(
    IsMemberInGroupsResponse * const q) : IdentityStoreResponsePrivate(q)
{

}

/*!
 * Parses a IdentityStore IsMemberInGroups response element from \a xml.
 */
void IsMemberInGroupsResponsePrivate::parseIsMemberInGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IsMemberInGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IdentityStore
} // namespace QtAws

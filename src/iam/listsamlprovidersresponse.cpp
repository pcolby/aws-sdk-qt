// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsamlprovidersresponse.h"
#include "listsamlprovidersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSAMLProvidersResponse
 * \brief The ListSAMLProvidersResponse class provides an interace for Iam ListSAMLProviders responses.
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
 * \sa IamClient::listSAMLProviders
 */

/*!
 * Constructs a ListSAMLProvidersResponse object for \a reply to \a request, with parent \a parent.
 */
ListSAMLProvidersResponse::ListSAMLProvidersResponse(
        const ListSAMLProvidersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListSAMLProvidersResponsePrivate(this), parent)
{
    setRequest(new ListSAMLProvidersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSAMLProvidersRequest * ListSAMLProvidersResponse::request() const
{
    Q_D(const ListSAMLProvidersResponse);
    return static_cast<const ListSAMLProvidersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListSAMLProviders \a response.
 */
void ListSAMLProvidersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSAMLProvidersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListSAMLProvidersResponsePrivate
 * \brief The ListSAMLProvidersResponsePrivate class provides private implementation for ListSAMLProvidersResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSAMLProvidersResponsePrivate object with public implementation \a q.
 */
ListSAMLProvidersResponsePrivate::ListSAMLProvidersResponsePrivate(
    ListSAMLProvidersResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListSAMLProviders response element from \a xml.
 */
void ListSAMLProvidersResponsePrivate::parseListSAMLProvidersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSAMLProvidersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

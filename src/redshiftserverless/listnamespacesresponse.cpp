// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnamespacesresponse.h"
#include "listnamespacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListNamespacesResponse
 * \brief The ListNamespacesResponse class provides an interace for RedshiftServerless ListNamespaces responses.
 *
 * \inmodule QtAwsRedshiftServerless
 *
 *  This is an interface reference for Amazon Redshift Serverless. It contains documentation for one of the programming or
 *  command line interfaces you can use to manage Amazon Redshift Serverless.
 * 
 *  </p
 * 
 *  Amazon Redshift Serverless automatically provisions data warehouse capacity and intelligently scales the underlying
 *  resources based on workload demands. Amazon Redshift Serverless adjusts capacity in seconds to deliver consistently high
 *  performance and simplified operations for even the most demanding and volatile workloads. Amazon Redshift Serverless
 *  lets you focus on using your data to acquire new insights for your business and customers.
 * 
 *  </p
 * 
 *  To learn more about Amazon Redshift Serverless, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What is Amazon Redshift Serverless</a>.
 *
 * \sa RedshiftServerlessClient::listNamespaces
 */

/*!
 * Constructs a ListNamespacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNamespacesResponse::ListNamespacesResponse(
        const ListNamespacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new ListNamespacesResponsePrivate(this), parent)
{
    setRequest(new ListNamespacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNamespacesRequest * ListNamespacesResponse::request() const
{
    Q_D(const ListNamespacesResponse);
    return static_cast<const ListNamespacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless ListNamespaces \a response.
 */
void ListNamespacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNamespacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::ListNamespacesResponsePrivate
 * \brief The ListNamespacesResponsePrivate class provides private implementation for ListNamespacesResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListNamespacesResponsePrivate object with public implementation \a q.
 */
ListNamespacesResponsePrivate::ListNamespacesResponsePrivate(
    ListNamespacesResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless ListNamespaces response element from \a xml.
 */
void ListNamespacesResponsePrivate::parseListNamespacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNamespacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

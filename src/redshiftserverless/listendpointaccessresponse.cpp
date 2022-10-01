// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointaccessresponse.h"
#include "listendpointaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListEndpointAccessResponse
 * \brief The ListEndpointAccessResponse class provides an interace for RedshiftServerless ListEndpointAccess responses.
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
 * \sa RedshiftServerlessClient::listEndpointAccess
 */

/*!
 * Constructs a ListEndpointAccessResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointAccessResponse::ListEndpointAccessResponse(
        const ListEndpointAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new ListEndpointAccessResponsePrivate(this), parent)
{
    setRequest(new ListEndpointAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointAccessRequest * ListEndpointAccessResponse::request() const
{
    Q_D(const ListEndpointAccessResponse);
    return static_cast<const ListEndpointAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless ListEndpointAccess \a response.
 */
void ListEndpointAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::ListEndpointAccessResponsePrivate
 * \brief The ListEndpointAccessResponsePrivate class provides private implementation for ListEndpointAccessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListEndpointAccessResponsePrivate object with public implementation \a q.
 */
ListEndpointAccessResponsePrivate::ListEndpointAccessResponsePrivate(
    ListEndpointAccessResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless ListEndpointAccess response element from \a xml.
 */
void ListEndpointAccessResponsePrivate::parseListEndpointAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

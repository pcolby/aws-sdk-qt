// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getendpointaccessresponse.h"
#include "getendpointaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetEndpointAccessResponse
 * \brief The GetEndpointAccessResponse class provides an interace for RedshiftServerless GetEndpointAccess responses.
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
 * \sa RedshiftServerlessClient::getEndpointAccess
 */

/*!
 * Constructs a GetEndpointAccessResponse object for \a reply to \a request, with parent \a parent.
 */
GetEndpointAccessResponse::GetEndpointAccessResponse(
        const GetEndpointAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetEndpointAccessResponsePrivate(this), parent)
{
    setRequest(new GetEndpointAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEndpointAccessRequest * GetEndpointAccessResponse::request() const
{
    Q_D(const GetEndpointAccessResponse);
    return static_cast<const GetEndpointAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetEndpointAccess \a response.
 */
void GetEndpointAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEndpointAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetEndpointAccessResponsePrivate
 * \brief The GetEndpointAccessResponsePrivate class provides private implementation for GetEndpointAccessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetEndpointAccessResponsePrivate object with public implementation \a q.
 */
GetEndpointAccessResponsePrivate::GetEndpointAccessResponsePrivate(
    GetEndpointAccessResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetEndpointAccess response element from \a xml.
 */
void GetEndpointAccessResponsePrivate::parseGetEndpointAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEndpointAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

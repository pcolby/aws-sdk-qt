// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepolicyresponse.h"
#include "getresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetResourcePolicyResponse
 * \brief The GetResourcePolicyResponse class provides an interace for RedshiftServerless GetResourcePolicy responses.
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
 * \sa RedshiftServerlessClient::getResourcePolicy
 */

/*!
 * Constructs a GetResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcePolicyResponse::GetResourcePolicyResponse(
        const GetResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new GetResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcePolicyRequest * GetResourcePolicyResponse::request() const
{
    Q_D(const GetResourcePolicyResponse);
    return static_cast<const GetResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetResourcePolicy \a response.
 */
void GetResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetResourcePolicyResponsePrivate
 * \brief The GetResourcePolicyResponsePrivate class provides private implementation for GetResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetResourcePolicyResponsePrivate object with public implementation \a q.
 */
GetResourcePolicyResponsePrivate::GetResourcePolicyResponsePrivate(
    GetResourcePolicyResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetResourcePolicy response element from \a xml.
 */
void GetResourcePolicyResponsePrivate::parseGetResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

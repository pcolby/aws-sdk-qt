// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecoverypointresponse.h"
#include "getrecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetRecoveryPointResponse
 * \brief The GetRecoveryPointResponse class provides an interace for RedshiftServerless GetRecoveryPoint responses.
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
 * \sa RedshiftServerlessClient::getRecoveryPoint
 */

/*!
 * Constructs a GetRecoveryPointResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecoveryPointResponse::GetRecoveryPointResponse(
        const GetRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new GetRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new GetRecoveryPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecoveryPointRequest * GetRecoveryPointResponse::request() const
{
    Q_D(const GetRecoveryPointResponse);
    return static_cast<const GetRecoveryPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless GetRecoveryPoint \a response.
 */
void GetRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::GetRecoveryPointResponsePrivate
 * \brief The GetRecoveryPointResponsePrivate class provides private implementation for GetRecoveryPointResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetRecoveryPointResponsePrivate object with public implementation \a q.
 */
GetRecoveryPointResponsePrivate::GetRecoveryPointResponsePrivate(
    GetRecoveryPointResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless GetRecoveryPoint response element from \a xml.
 */
void GetRecoveryPointResponsePrivate::parseGetRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecoveryPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

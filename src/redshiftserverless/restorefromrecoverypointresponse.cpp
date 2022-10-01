// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restorefromrecoverypointresponse.h"
#include "restorefromrecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RestoreFromRecoveryPointResponse
 * \brief The RestoreFromRecoveryPointResponse class provides an interace for RedshiftServerless RestoreFromRecoveryPoint responses.
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
 * \sa RedshiftServerlessClient::restoreFromRecoveryPoint
 */

/*!
 * Constructs a RestoreFromRecoveryPointResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreFromRecoveryPointResponse::RestoreFromRecoveryPointResponse(
        const RestoreFromRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new RestoreFromRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new RestoreFromRecoveryPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreFromRecoveryPointRequest * RestoreFromRecoveryPointResponse::request() const
{
    Q_D(const RestoreFromRecoveryPointResponse);
    return static_cast<const RestoreFromRecoveryPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless RestoreFromRecoveryPoint \a response.
 */
void RestoreFromRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreFromRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::RestoreFromRecoveryPointResponsePrivate
 * \brief The RestoreFromRecoveryPointResponsePrivate class provides private implementation for RestoreFromRecoveryPointResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RestoreFromRecoveryPointResponsePrivate object with public implementation \a q.
 */
RestoreFromRecoveryPointResponsePrivate::RestoreFromRecoveryPointResponsePrivate(
    RestoreFromRecoveryPointResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless RestoreFromRecoveryPoint response element from \a xml.
 */
void RestoreFromRecoveryPointResponsePrivate::parseRestoreFromRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreFromRecoveryPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

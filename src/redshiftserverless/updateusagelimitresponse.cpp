// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateusagelimitresponse.h"
#include "updateusagelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateUsageLimitResponse
 * \brief The UpdateUsageLimitResponse class provides an interace for RedshiftServerless UpdateUsageLimit responses.
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
 * \sa RedshiftServerlessClient::updateUsageLimit
 */

/*!
 * Constructs a UpdateUsageLimitResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUsageLimitResponse::UpdateUsageLimitResponse(
        const UpdateUsageLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new UpdateUsageLimitResponsePrivate(this), parent)
{
    setRequest(new UpdateUsageLimitRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUsageLimitRequest * UpdateUsageLimitResponse::request() const
{
    Q_D(const UpdateUsageLimitResponse);
    return static_cast<const UpdateUsageLimitRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless UpdateUsageLimit \a response.
 */
void UpdateUsageLimitResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUsageLimitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::UpdateUsageLimitResponsePrivate
 * \brief The UpdateUsageLimitResponsePrivate class provides private implementation for UpdateUsageLimitResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateUsageLimitResponsePrivate object with public implementation \a q.
 */
UpdateUsageLimitResponsePrivate::UpdateUsageLimitResponsePrivate(
    UpdateUsageLimitResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless UpdateUsageLimit response element from \a xml.
 */
void UpdateUsageLimitResponsePrivate::parseUpdateUsageLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUsageLimitResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkgroupresponse.h"
#include "updateworkgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateWorkgroupResponse
 * \brief The UpdateWorkgroupResponse class provides an interace for RedshiftServerless UpdateWorkgroup responses.
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
 * \sa RedshiftServerlessClient::updateWorkgroup
 */

/*!
 * Constructs a UpdateWorkgroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkgroupResponse::UpdateWorkgroupResponse(
        const UpdateWorkgroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new UpdateWorkgroupResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkgroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkgroupRequest * UpdateWorkgroupResponse::request() const
{
    Q_D(const UpdateWorkgroupResponse);
    return static_cast<const UpdateWorkgroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless UpdateWorkgroup \a response.
 */
void UpdateWorkgroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkgroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::UpdateWorkgroupResponsePrivate
 * \brief The UpdateWorkgroupResponsePrivate class provides private implementation for UpdateWorkgroupResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateWorkgroupResponsePrivate object with public implementation \a q.
 */
UpdateWorkgroupResponsePrivate::UpdateWorkgroupResponsePrivate(
    UpdateWorkgroupResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless UpdateWorkgroup response element from \a xml.
 */
void UpdateWorkgroupResponsePrivate::parseUpdateWorkgroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkgroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

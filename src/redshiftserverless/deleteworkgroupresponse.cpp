// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkgroupresponse.h"
#include "deleteworkgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::DeleteWorkgroupResponse
 * \brief The DeleteWorkgroupResponse class provides an interace for RedshiftServerless DeleteWorkgroup responses.
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
 * \sa RedshiftServerlessClient::deleteWorkgroup
 */

/*!
 * Constructs a DeleteWorkgroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkgroupResponse::DeleteWorkgroupResponse(
        const DeleteWorkgroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new DeleteWorkgroupResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkgroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkgroupRequest * DeleteWorkgroupResponse::request() const
{
    Q_D(const DeleteWorkgroupResponse);
    return static_cast<const DeleteWorkgroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless DeleteWorkgroup \a response.
 */
void DeleteWorkgroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkgroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::DeleteWorkgroupResponsePrivate
 * \brief The DeleteWorkgroupResponsePrivate class provides private implementation for DeleteWorkgroupResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a DeleteWorkgroupResponsePrivate object with public implementation \a q.
 */
DeleteWorkgroupResponsePrivate::DeleteWorkgroupResponsePrivate(
    DeleteWorkgroupResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless DeleteWorkgroup response element from \a xml.
 */
void DeleteWorkgroupResponsePrivate::parseDeleteWorkgroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkgroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

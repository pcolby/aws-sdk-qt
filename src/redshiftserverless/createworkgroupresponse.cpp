// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkgroupresponse.h"
#include "createworkgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateWorkgroupResponse
 * \brief The CreateWorkgroupResponse class provides an interace for RedshiftServerless CreateWorkgroup responses.
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
 * \sa RedshiftServerlessClient::createWorkgroup
 */

/*!
 * Constructs a CreateWorkgroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkgroupResponse::CreateWorkgroupResponse(
        const CreateWorkgroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new CreateWorkgroupResponsePrivate(this), parent)
{
    setRequest(new CreateWorkgroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkgroupRequest * CreateWorkgroupResponse::request() const
{
    Q_D(const CreateWorkgroupResponse);
    return static_cast<const CreateWorkgroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless CreateWorkgroup \a response.
 */
void CreateWorkgroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkgroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::CreateWorkgroupResponsePrivate
 * \brief The CreateWorkgroupResponsePrivate class provides private implementation for CreateWorkgroupResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateWorkgroupResponsePrivate object with public implementation \a q.
 */
CreateWorkgroupResponsePrivate::CreateWorkgroupResponsePrivate(
    CreateWorkgroupResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless CreateWorkgroup response element from \a xml.
 */
void CreateWorkgroupResponsePrivate::parseCreateWorkgroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkgroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

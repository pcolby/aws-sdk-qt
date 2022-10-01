// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointaccessresponse.h"
#include "createendpointaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateEndpointAccessResponse
 * \brief The CreateEndpointAccessResponse class provides an interace for RedshiftServerless CreateEndpointAccess responses.
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
 * \sa RedshiftServerlessClient::createEndpointAccess
 */

/*!
 * Constructs a CreateEndpointAccessResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEndpointAccessResponse::CreateEndpointAccessResponse(
        const CreateEndpointAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new CreateEndpointAccessResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEndpointAccessRequest * CreateEndpointAccessResponse::request() const
{
    Q_D(const CreateEndpointAccessResponse);
    return static_cast<const CreateEndpointAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless CreateEndpointAccess \a response.
 */
void CreateEndpointAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEndpointAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::CreateEndpointAccessResponsePrivate
 * \brief The CreateEndpointAccessResponsePrivate class provides private implementation for CreateEndpointAccessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateEndpointAccessResponsePrivate object with public implementation \a q.
 */
CreateEndpointAccessResponsePrivate::CreateEndpointAccessResponsePrivate(
    CreateEndpointAccessResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless CreateEndpointAccess response element from \a xml.
 */
void CreateEndpointAccessResponsePrivate::parseCreateEndpointAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

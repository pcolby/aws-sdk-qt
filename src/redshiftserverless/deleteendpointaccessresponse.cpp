// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointaccessresponse.h"
#include "deleteendpointaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::DeleteEndpointAccessResponse
 * \brief The DeleteEndpointAccessResponse class provides an interace for RedshiftServerless DeleteEndpointAccess responses.
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
 * \sa RedshiftServerlessClient::deleteEndpointAccess
 */

/*!
 * Constructs a DeleteEndpointAccessResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEndpointAccessResponse::DeleteEndpointAccessResponse(
        const DeleteEndpointAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new DeleteEndpointAccessResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEndpointAccessRequest * DeleteEndpointAccessResponse::request() const
{
    Q_D(const DeleteEndpointAccessResponse);
    return static_cast<const DeleteEndpointAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless DeleteEndpointAccess \a response.
 */
void DeleteEndpointAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEndpointAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::DeleteEndpointAccessResponsePrivate
 * \brief The DeleteEndpointAccessResponsePrivate class provides private implementation for DeleteEndpointAccessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a DeleteEndpointAccessResponsePrivate object with public implementation \a q.
 */
DeleteEndpointAccessResponsePrivate::DeleteEndpointAccessResponsePrivate(
    DeleteEndpointAccessResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless DeleteEndpointAccess response element from \a xml.
 */
void DeleteEndpointAccessResponsePrivate::parseDeleteEndpointAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

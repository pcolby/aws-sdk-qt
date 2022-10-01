// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointaccessresponse.h"
#include "updateendpointaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateEndpointAccessResponse
 * \brief The UpdateEndpointAccessResponse class provides an interace for RedshiftServerless UpdateEndpointAccess responses.
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
 * \sa RedshiftServerlessClient::updateEndpointAccess
 */

/*!
 * Constructs a UpdateEndpointAccessResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEndpointAccessResponse::UpdateEndpointAccessResponse(
        const UpdateEndpointAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new UpdateEndpointAccessResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEndpointAccessRequest * UpdateEndpointAccessResponse::request() const
{
    Q_D(const UpdateEndpointAccessResponse);
    return static_cast<const UpdateEndpointAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless UpdateEndpointAccess \a response.
 */
void UpdateEndpointAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEndpointAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::UpdateEndpointAccessResponsePrivate
 * \brief The UpdateEndpointAccessResponsePrivate class provides private implementation for UpdateEndpointAccessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateEndpointAccessResponsePrivate object with public implementation \a q.
 */
UpdateEndpointAccessResponsePrivate::UpdateEndpointAccessResponsePrivate(
    UpdateEndpointAccessResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless UpdateEndpointAccess response element from \a xml.
 */
void UpdateEndpointAccessResponsePrivate::parseUpdateEndpointAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

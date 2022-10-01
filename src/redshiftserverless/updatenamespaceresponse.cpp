// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenamespaceresponse.h"
#include "updatenamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateNamespaceResponse
 * \brief The UpdateNamespaceResponse class provides an interace for RedshiftServerless UpdateNamespace responses.
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
 * \sa RedshiftServerlessClient::updateNamespace
 */

/*!
 * Constructs a UpdateNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNamespaceResponse::UpdateNamespaceResponse(
        const UpdateNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new UpdateNamespaceResponsePrivate(this), parent)
{
    setRequest(new UpdateNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNamespaceRequest * UpdateNamespaceResponse::request() const
{
    Q_D(const UpdateNamespaceResponse);
    return static_cast<const UpdateNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless UpdateNamespace \a response.
 */
void UpdateNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::UpdateNamespaceResponsePrivate
 * \brief The UpdateNamespaceResponsePrivate class provides private implementation for UpdateNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateNamespaceResponsePrivate object with public implementation \a q.
 */
UpdateNamespaceResponsePrivate::UpdateNamespaceResponsePrivate(
    UpdateNamespaceResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless UpdateNamespace response element from \a xml.
 */
void UpdateNamespaceResponsePrivate::parseUpdateNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

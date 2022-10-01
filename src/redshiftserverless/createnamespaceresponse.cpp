// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnamespaceresponse.h"
#include "createnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateNamespaceResponse
 * \brief The CreateNamespaceResponse class provides an interace for RedshiftServerless CreateNamespace responses.
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
 * \sa RedshiftServerlessClient::createNamespace
 */

/*!
 * Constructs a CreateNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNamespaceResponse::CreateNamespaceResponse(
        const CreateNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftServerlessResponse(new CreateNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreateNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNamespaceRequest * CreateNamespaceResponse::request() const
{
    Q_D(const CreateNamespaceResponse);
    return static_cast<const CreateNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftServerless CreateNamespace \a response.
 */
void CreateNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftServerless::CreateNamespaceResponsePrivate
 * \brief The CreateNamespaceResponsePrivate class provides private implementation for CreateNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateNamespaceResponsePrivate object with public implementation \a q.
 */
CreateNamespaceResponsePrivate::CreateNamespaceResponsePrivate(
    CreateNamespaceResponse * const q) : RedshiftServerlessResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftServerless CreateNamespace response element from \a xml.
 */
void CreateNamespaceResponsePrivate::parseCreateNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftServerless
} // namespace QtAws

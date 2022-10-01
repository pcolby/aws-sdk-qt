// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptreservednodeexchangeresponse.h"
#include "acceptreservednodeexchangeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::AcceptReservedNodeExchangeResponse
 * \brief The AcceptReservedNodeExchangeResponse class provides an interace for Redshift AcceptReservedNodeExchange responses.
 *
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon
 *  Redshift Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::acceptReservedNodeExchange
 */

/*!
 * Constructs a AcceptReservedNodeExchangeResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptReservedNodeExchangeResponse::AcceptReservedNodeExchangeResponse(
        const AcceptReservedNodeExchangeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new AcceptReservedNodeExchangeResponsePrivate(this), parent)
{
    setRequest(new AcceptReservedNodeExchangeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptReservedNodeExchangeRequest * AcceptReservedNodeExchangeResponse::request() const
{
    Q_D(const AcceptReservedNodeExchangeResponse);
    return static_cast<const AcceptReservedNodeExchangeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift AcceptReservedNodeExchange \a response.
 */
void AcceptReservedNodeExchangeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptReservedNodeExchangeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::AcceptReservedNodeExchangeResponsePrivate
 * \brief The AcceptReservedNodeExchangeResponsePrivate class provides private implementation for AcceptReservedNodeExchangeResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a AcceptReservedNodeExchangeResponsePrivate object with public implementation \a q.
 */
AcceptReservedNodeExchangeResponsePrivate::AcceptReservedNodeExchangeResponsePrivate(
    AcceptReservedNodeExchangeResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift AcceptReservedNodeExchange response element from \a xml.
 */
void AcceptReservedNodeExchangeResponsePrivate::parseAcceptReservedNodeExchangeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptReservedNodeExchangeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws

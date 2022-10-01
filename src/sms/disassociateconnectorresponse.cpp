// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateconnectorresponse.h"
#include "disassociateconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DisassociateConnectorResponse
 * \brief The DisassociateConnectorResponse class provides an interace for Sms DisassociateConnector responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::disassociateConnector
 */

/*!
 * Constructs a DisassociateConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateConnectorResponse::DisassociateConnectorResponse(
        const DisassociateConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DisassociateConnectorResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateConnectorRequest * DisassociateConnectorResponse::request() const
{
    Q_D(const DisassociateConnectorResponse);
    return static_cast<const DisassociateConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms DisassociateConnector \a response.
 */
void DisassociateConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::DisassociateConnectorResponsePrivate
 * \brief The DisassociateConnectorResponsePrivate class provides private implementation for DisassociateConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DisassociateConnectorResponsePrivate object with public implementation \a q.
 */
DisassociateConnectorResponsePrivate::DisassociateConnectorResponsePrivate(
    DisassociateConnectorResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms DisassociateConnector response element from \a xml.
 */
void DisassociateConnectorResponsePrivate::parseDisassociateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws

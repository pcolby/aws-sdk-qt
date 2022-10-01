// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatequeuequickconnectsresponse.h"
#include "disassociatequeuequickconnectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DisassociateQueueQuickConnectsResponse
 * \brief The DisassociateQueueQuickConnectsResponse class provides an interace for Connect DisassociateQueueQuickConnects responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::disassociateQueueQuickConnects
 */

/*!
 * Constructs a DisassociateQueueQuickConnectsResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateQueueQuickConnectsResponse::DisassociateQueueQuickConnectsResponse(
        const DisassociateQueueQuickConnectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DisassociateQueueQuickConnectsResponsePrivate(this), parent)
{
    setRequest(new DisassociateQueueQuickConnectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateQueueQuickConnectsRequest * DisassociateQueueQuickConnectsResponse::request() const
{
    Q_D(const DisassociateQueueQuickConnectsResponse);
    return static_cast<const DisassociateQueueQuickConnectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DisassociateQueueQuickConnects \a response.
 */
void DisassociateQueueQuickConnectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateQueueQuickConnectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DisassociateQueueQuickConnectsResponsePrivate
 * \brief The DisassociateQueueQuickConnectsResponsePrivate class provides private implementation for DisassociateQueueQuickConnectsResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DisassociateQueueQuickConnectsResponsePrivate object with public implementation \a q.
 */
DisassociateQueueQuickConnectsResponsePrivate::DisassociateQueueQuickConnectsResponsePrivate(
    DisassociateQueueQuickConnectsResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DisassociateQueueQuickConnects response element from \a xml.
 */
void DisassociateQueueQuickConnectsResponsePrivate::parseDisassociateQueueQuickConnectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateQueueQuickConnectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws

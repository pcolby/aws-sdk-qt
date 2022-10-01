// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectsourceserverresponse.h"
#include "disconnectsourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DisconnectSourceServerResponse
 * \brief The DisconnectSourceServerResponse class provides an interace for Drs DisconnectSourceServer responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::disconnectSourceServer
 */

/*!
 * Constructs a DisconnectSourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
DisconnectSourceServerResponse::DisconnectSourceServerResponse(
        const DisconnectSourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DisconnectSourceServerResponsePrivate(this), parent)
{
    setRequest(new DisconnectSourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisconnectSourceServerRequest * DisconnectSourceServerResponse::request() const
{
    Q_D(const DisconnectSourceServerResponse);
    return static_cast<const DisconnectSourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DisconnectSourceServer \a response.
 */
void DisconnectSourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisconnectSourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DisconnectSourceServerResponsePrivate
 * \brief The DisconnectSourceServerResponsePrivate class provides private implementation for DisconnectSourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DisconnectSourceServerResponsePrivate object with public implementation \a q.
 */
DisconnectSourceServerResponsePrivate::DisconnectSourceServerResponsePrivate(
    DisconnectSourceServerResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DisconnectSourceServer response element from \a xml.
 */
void DisconnectSourceServerResponsePrivate::parseDisconnectSourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisconnectSourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws

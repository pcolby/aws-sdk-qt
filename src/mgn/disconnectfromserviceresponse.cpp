// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectfromserviceresponse.h"
#include "disconnectfromserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DisconnectFromServiceResponse
 * \brief The DisconnectFromServiceResponse class provides an interace for Mgn DisconnectFromService responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::disconnectFromService
 */

/*!
 * Constructs a DisconnectFromServiceResponse object for \a reply to \a request, with parent \a parent.
 */
DisconnectFromServiceResponse::DisconnectFromServiceResponse(
        const DisconnectFromServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DisconnectFromServiceResponsePrivate(this), parent)
{
    setRequest(new DisconnectFromServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisconnectFromServiceRequest * DisconnectFromServiceResponse::request() const
{
    Q_D(const DisconnectFromServiceResponse);
    return static_cast<const DisconnectFromServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DisconnectFromService \a response.
 */
void DisconnectFromServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisconnectFromServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DisconnectFromServiceResponsePrivate
 * \brief The DisconnectFromServiceResponsePrivate class provides private implementation for DisconnectFromServiceResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DisconnectFromServiceResponsePrivate object with public implementation \a q.
 */
DisconnectFromServiceResponsePrivate::DisconnectFromServiceResponsePrivate(
    DisconnectFromServiceResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DisconnectFromService response element from \a xml.
 */
void DisconnectFromServiceResponsePrivate::parseDisconnectFromServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisconnectFromServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws

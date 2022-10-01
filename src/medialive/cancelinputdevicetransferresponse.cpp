// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelinputdevicetransferresponse.h"
#include "cancelinputdevicetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CancelInputDeviceTransferResponse
 * \brief The CancelInputDeviceTransferResponse class provides an interace for MediaLive CancelInputDeviceTransfer responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::cancelInputDeviceTransfer
 */

/*!
 * Constructs a CancelInputDeviceTransferResponse object for \a reply to \a request, with parent \a parent.
 */
CancelInputDeviceTransferResponse::CancelInputDeviceTransferResponse(
        const CancelInputDeviceTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CancelInputDeviceTransferResponsePrivate(this), parent)
{
    setRequest(new CancelInputDeviceTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelInputDeviceTransferRequest * CancelInputDeviceTransferResponse::request() const
{
    Q_D(const CancelInputDeviceTransferResponse);
    return static_cast<const CancelInputDeviceTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive CancelInputDeviceTransfer \a response.
 */
void CancelInputDeviceTransferResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelInputDeviceTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CancelInputDeviceTransferResponsePrivate
 * \brief The CancelInputDeviceTransferResponsePrivate class provides private implementation for CancelInputDeviceTransferResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CancelInputDeviceTransferResponsePrivate object with public implementation \a q.
 */
CancelInputDeviceTransferResponsePrivate::CancelInputDeviceTransferResponsePrivate(
    CancelInputDeviceTransferResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CancelInputDeviceTransfer response element from \a xml.
 */
void CancelInputDeviceTransferResponsePrivate::parseCancelInputDeviceTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelInputDeviceTransferResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws

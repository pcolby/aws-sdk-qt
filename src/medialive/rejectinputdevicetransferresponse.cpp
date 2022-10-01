// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectinputdevicetransferresponse.h"
#include "rejectinputdevicetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::RejectInputDeviceTransferResponse
 * \brief The RejectInputDeviceTransferResponse class provides an interace for MediaLive RejectInputDeviceTransfer responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::rejectInputDeviceTransfer
 */

/*!
 * Constructs a RejectInputDeviceTransferResponse object for \a reply to \a request, with parent \a parent.
 */
RejectInputDeviceTransferResponse::RejectInputDeviceTransferResponse(
        const RejectInputDeviceTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new RejectInputDeviceTransferResponsePrivate(this), parent)
{
    setRequest(new RejectInputDeviceTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectInputDeviceTransferRequest * RejectInputDeviceTransferResponse::request() const
{
    Q_D(const RejectInputDeviceTransferResponse);
    return static_cast<const RejectInputDeviceTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive RejectInputDeviceTransfer \a response.
 */
void RejectInputDeviceTransferResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectInputDeviceTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::RejectInputDeviceTransferResponsePrivate
 * \brief The RejectInputDeviceTransferResponsePrivate class provides private implementation for RejectInputDeviceTransferResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a RejectInputDeviceTransferResponsePrivate object with public implementation \a q.
 */
RejectInputDeviceTransferResponsePrivate::RejectInputDeviceTransferResponsePrivate(
    RejectInputDeviceTransferResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive RejectInputDeviceTransfer response element from \a xml.
 */
void RejectInputDeviceTransferResponsePrivate::parseRejectInputDeviceTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectInputDeviceTransferResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws

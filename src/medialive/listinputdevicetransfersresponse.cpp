// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputdevicetransfersresponse.h"
#include "listinputdevicetransfersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersResponse
 * \brief The ListInputDeviceTransfersResponse class provides an interace for MediaLive ListInputDeviceTransfers responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDeviceTransfers
 */

/*!
 * Constructs a ListInputDeviceTransfersResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputDeviceTransfersResponse::ListInputDeviceTransfersResponse(
        const ListInputDeviceTransfersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputDeviceTransfersResponsePrivate(this), parent)
{
    setRequest(new ListInputDeviceTransfersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputDeviceTransfersRequest * ListInputDeviceTransfersResponse::request() const
{
    Q_D(const ListInputDeviceTransfersResponse);
    return static_cast<const ListInputDeviceTransfersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputDeviceTransfers \a response.
 */
void ListInputDeviceTransfersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputDeviceTransfersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersResponsePrivate
 * \brief The ListInputDeviceTransfersResponsePrivate class provides private implementation for ListInputDeviceTransfersResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDeviceTransfersResponsePrivate object with public implementation \a q.
 */
ListInputDeviceTransfersResponsePrivate::ListInputDeviceTransfersResponsePrivate(
    ListInputDeviceTransfersResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputDeviceTransfers response element from \a xml.
 */
void ListInputDeviceTransfersResponsePrivate::parseListInputDeviceTransfersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputDeviceTransfersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws

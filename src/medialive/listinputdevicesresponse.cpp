// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputdevicesresponse.h"
#include "listinputdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDevicesResponse
 * \brief The ListInputDevicesResponse class provides an interace for MediaLive ListInputDevices responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDevices
 */

/*!
 * Constructs a ListInputDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputDevicesResponse::ListInputDevicesResponse(
        const ListInputDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputDevicesResponsePrivate(this), parent)
{
    setRequest(new ListInputDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputDevicesRequest * ListInputDevicesResponse::request() const
{
    Q_D(const ListInputDevicesResponse);
    return static_cast<const ListInputDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputDevices \a response.
 */
void ListInputDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputDevicesResponsePrivate
 * \brief The ListInputDevicesResponsePrivate class provides private implementation for ListInputDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDevicesResponsePrivate object with public implementation \a q.
 */
ListInputDevicesResponsePrivate::ListInputDevicesResponsePrivate(
    ListInputDevicesResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputDevices response element from \a xml.
 */
void ListInputDevicesResponsePrivate::parseListInputDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsetsresponse.h"
#include "listconfigurationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::ListConfigurationSetsResponse
 * \brief The ListConfigurationSetsResponse class provides an interace for PinpointSmsVoice ListConfigurationSets responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::listConfigurationSets
 */

/*!
 * Constructs a ListConfigurationSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationSetsResponse::ListConfigurationSetsResponse(
        const ListConfigurationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new ListConfigurationSetsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationSetsRequest * ListConfigurationSetsResponse::request() const
{
    Q_D(const ListConfigurationSetsResponse);
    return static_cast<const ListConfigurationSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoice ListConfigurationSets \a response.
 */
void ListConfigurationSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::ListConfigurationSetsResponsePrivate
 * \brief The ListConfigurationSetsResponsePrivate class provides private implementation for ListConfigurationSetsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a ListConfigurationSetsResponsePrivate object with public implementation \a q.
 */
ListConfigurationSetsResponsePrivate::ListConfigurationSetsResponsePrivate(
    ListConfigurationSetsResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice ListConfigurationSets response element from \a xml.
 */
void ListConfigurationSetsResponsePrivate::parseListConfigurationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws

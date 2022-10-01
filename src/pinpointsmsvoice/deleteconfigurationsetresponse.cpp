// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::DeleteConfigurationSetResponse
 * \brief The DeleteConfigurationSetResponse class provides an interace for PinpointSmsVoice DeleteConfigurationSet responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::deleteConfigurationSet
 */

/*!
 * Constructs a DeleteConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationSetResponse::DeleteConfigurationSetResponse(
        const DeleteConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new DeleteConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigurationSetRequest * DeleteConfigurationSetResponse::request() const
{
    Q_D(const DeleteConfigurationSetResponse);
    return static_cast<const DeleteConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoice DeleteConfigurationSet \a response.
 */
void DeleteConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::DeleteConfigurationSetResponsePrivate
 * \brief The DeleteConfigurationSetResponsePrivate class provides private implementation for DeleteConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a DeleteConfigurationSetResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationSetResponsePrivate::DeleteConfigurationSetResponsePrivate(
    DeleteConfigurationSetResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice DeleteConfigurationSet response element from \a xml.
 */
void DeleteConfigurationSetResponsePrivate::parseDeleteConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws

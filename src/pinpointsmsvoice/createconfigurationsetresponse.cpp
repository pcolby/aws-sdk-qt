// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationsetresponse.h"
#include "createconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::CreateConfigurationSetResponse
 * \brief The CreateConfigurationSetResponse class provides an interace for PinpointSmsVoice CreateConfigurationSet responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::createConfigurationSet
 */

/*!
 * Constructs a CreateConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetResponse::CreateConfigurationSetResponse(
        const CreateConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new CreateConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetRequest * CreateConfigurationSetResponse::request() const
{
    Q_D(const CreateConfigurationSetResponse);
    return static_cast<const CreateConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoice CreateConfigurationSet \a response.
 */
void CreateConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::CreateConfigurationSetResponsePrivate
 * \brief The CreateConfigurationSetResponsePrivate class provides private implementation for CreateConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a CreateConfigurationSetResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetResponsePrivate::CreateConfigurationSetResponsePrivate(
    CreateConfigurationSetResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice CreateConfigurationSet response element from \a xml.
 */
void CreateConfigurationSetResponsePrivate::parseCreateConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws

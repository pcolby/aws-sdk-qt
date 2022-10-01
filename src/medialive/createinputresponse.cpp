// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinputresponse.h"
#include "createinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputResponse
 * \brief The CreateInputResponse class provides an interace for MediaLive CreateInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createInput
 */

/*!
 * Constructs a CreateInputResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInputResponse::CreateInputResponse(
        const CreateInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateInputResponsePrivate(this), parent)
{
    setRequest(new CreateInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInputRequest * CreateInputResponse::request() const
{
    Q_D(const CreateInputResponse);
    return static_cast<const CreateInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateInput \a response.
 */
void CreateInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateInputResponsePrivate
 * \brief The CreateInputResponsePrivate class provides private implementation for CreateInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateInputResponsePrivate object with public implementation \a q.
 */
CreateInputResponsePrivate::CreateInputResponsePrivate(
    CreateInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateInput response element from \a xml.
 */
void CreateInputResponsePrivate::parseCreateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws

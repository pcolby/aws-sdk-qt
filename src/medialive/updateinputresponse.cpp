// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinputresponse.h"
#include "updateinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputResponse
 * \brief The UpdateInputResponse class provides an interace for MediaLive UpdateInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInput
 */

/*!
 * Constructs a UpdateInputResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInputResponse::UpdateInputResponse(
        const UpdateInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputResponsePrivate(this), parent)
{
    setRequest(new UpdateInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInputRequest * UpdateInputResponse::request() const
{
    Q_D(const UpdateInputResponse);
    return static_cast<const UpdateInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateInput \a response.
 */
void UpdateInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateInputResponsePrivate
 * \brief The UpdateInputResponsePrivate class provides private implementation for UpdateInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputResponsePrivate object with public implementation \a q.
 */
UpdateInputResponsePrivate::UpdateInputResponsePrivate(
    UpdateInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateInput response element from \a xml.
 */
void UpdateInputResponsePrivate::parseUpdateInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws

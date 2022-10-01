// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworldtemplateresponse.h"
#include "updateworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateResponse
 * \brief The UpdateWorldTemplateResponse class provides an interace for RoboMaker UpdateWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateWorldTemplate
 */

/*!
 * Constructs a UpdateWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorldTemplateResponse::UpdateWorldTemplateResponse(
        const UpdateWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new UpdateWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorldTemplateRequest * UpdateWorldTemplateResponse::request() const
{
    Q_D(const UpdateWorldTemplateResponse);
    return static_cast<const UpdateWorldTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker UpdateWorldTemplate \a response.
 */
void UpdateWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateResponsePrivate
 * \brief The UpdateWorldTemplateResponsePrivate class provides private implementation for UpdateWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateWorldTemplateResponsePrivate object with public implementation \a q.
 */
UpdateWorldTemplateResponsePrivate::UpdateWorldTemplateResponsePrivate(
    UpdateWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker UpdateWorldTemplate response element from \a xml.
 */
void UpdateWorldTemplateResponsePrivate::parseUpdateWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws

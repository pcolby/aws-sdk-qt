// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworldtemplateresponse.h"
#include "deleteworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateResponse
 * \brief The DeleteWorldTemplateResponse class provides an interace for RoboMaker DeleteWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteWorldTemplate
 */

/*!
 * Constructs a DeleteWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorldTemplateResponse::DeleteWorldTemplateResponse(
        const DeleteWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorldTemplateRequest * DeleteWorldTemplateResponse::request() const
{
    Q_D(const DeleteWorldTemplateResponse);
    return static_cast<const DeleteWorldTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteWorldTemplate \a response.
 */
void DeleteWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateResponsePrivate
 * \brief The DeleteWorldTemplateResponsePrivate class provides private implementation for DeleteWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteWorldTemplateResponsePrivate object with public implementation \a q.
 */
DeleteWorldTemplateResponsePrivate::DeleteWorldTemplateResponsePrivate(
    DeleteWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteWorldTemplate response element from \a xml.
 */
void DeleteWorldTemplateResponsePrivate::parseDeleteWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws

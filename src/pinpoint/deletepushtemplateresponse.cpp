// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepushtemplateresponse.h"
#include "deletepushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeletePushTemplateResponse
 * \brief The DeletePushTemplateResponse class provides an interace for Pinpoint DeletePushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deletePushTemplate
 */

/*!
 * Constructs a DeletePushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePushTemplateResponse::DeletePushTemplateResponse(
        const DeletePushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeletePushTemplateResponsePrivate(this), parent)
{
    setRequest(new DeletePushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePushTemplateRequest * DeletePushTemplateResponse::request() const
{
    Q_D(const DeletePushTemplateResponse);
    return static_cast<const DeletePushTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeletePushTemplate \a response.
 */
void DeletePushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeletePushTemplateResponsePrivate
 * \brief The DeletePushTemplateResponsePrivate class provides private implementation for DeletePushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeletePushTemplateResponsePrivate object with public implementation \a q.
 */
DeletePushTemplateResponsePrivate::DeletePushTemplateResponsePrivate(
    DeletePushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeletePushTemplate response element from \a xml.
 */
void DeletePushTemplateResponsePrivate::parseDeletePushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinapptemplateresponse.h"
#include "deleteinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateResponse
 * \brief The DeleteInAppTemplateResponse class provides an interace for Pinpoint DeleteInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteInAppTemplate
 */

/*!
 * Constructs a DeleteInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInAppTemplateResponse::DeleteInAppTemplateResponse(
        const DeleteInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInAppTemplateRequest * DeleteInAppTemplateResponse::request() const
{
    Q_D(const DeleteInAppTemplateResponse);
    return static_cast<const DeleteInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteInAppTemplate \a response.
 */
void DeleteInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateResponsePrivate
 * \brief The DeleteInAppTemplateResponsePrivate class provides private implementation for DeleteInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteInAppTemplateResponsePrivate object with public implementation \a q.
 */
DeleteInAppTemplateResponsePrivate::DeleteInAppTemplateResponsePrivate(
    DeleteInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteInAppTemplate response element from \a xml.
 */
void DeleteInAppTemplateResponsePrivate::parseDeleteInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

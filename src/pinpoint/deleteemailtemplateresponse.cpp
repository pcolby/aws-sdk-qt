// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailtemplateresponse.h"
#include "deleteemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateResponse
 * \brief The DeleteEmailTemplateResponse class provides an interace for Pinpoint DeleteEmailTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailTemplate
 */

/*!
 * Constructs a DeleteEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailTemplateResponse::DeleteEmailTemplateResponse(
        const DeleteEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailTemplateRequest * DeleteEmailTemplateResponse::request() const
{
    Q_D(const DeleteEmailTemplateResponse);
    return static_cast<const DeleteEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteEmailTemplate \a response.
 */
void DeleteEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailTemplateResponsePrivate
 * \brief The DeleteEmailTemplateResponsePrivate class provides private implementation for DeleteEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailTemplateResponsePrivate object with public implementation \a q.
 */
DeleteEmailTemplateResponsePrivate::DeleteEmailTemplateResponsePrivate(
    DeleteEmailTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteEmailTemplate response element from \a xml.
 */
void DeleteEmailTemplateResponsePrivate::parseDeleteEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

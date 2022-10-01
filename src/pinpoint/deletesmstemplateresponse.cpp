// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesmstemplateresponse.h"
#include "deletesmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateResponse
 * \brief The DeleteSmsTemplateResponse class provides an interace for Pinpoint DeleteSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSmsTemplate
 */

/*!
 * Constructs a DeleteSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSmsTemplateResponse::DeleteSmsTemplateResponse(
        const DeleteSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSmsTemplateRequest * DeleteSmsTemplateResponse::request() const
{
    Q_D(const DeleteSmsTemplateResponse);
    return static_cast<const DeleteSmsTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteSmsTemplate \a response.
 */
void DeleteSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateResponsePrivate
 * \brief The DeleteSmsTemplateResponsePrivate class provides private implementation for DeleteSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsTemplateResponsePrivate object with public implementation \a q.
 */
DeleteSmsTemplateResponsePrivate::DeleteSmsTemplateResponsePrivate(
    DeleteSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteSmsTemplate response element from \a xml.
 */
void DeleteSmsTemplateResponsePrivate::parseDeleteSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

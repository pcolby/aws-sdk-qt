// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinapptemplateresponse.h"
#include "getinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateResponse
 * \brief The GetInAppTemplateResponse class provides an interace for Pinpoint GetInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppTemplate
 */

/*!
 * Constructs a GetInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetInAppTemplateResponse::GetInAppTemplateResponse(
        const GetInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new GetInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInAppTemplateRequest * GetInAppTemplateResponse::request() const
{
    Q_D(const GetInAppTemplateResponse);
    return static_cast<const GetInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetInAppTemplate \a response.
 */
void GetInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateResponsePrivate
 * \brief The GetInAppTemplateResponsePrivate class provides private implementation for GetInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppTemplateResponsePrivate object with public implementation \a q.
 */
GetInAppTemplateResponsePrivate::GetInAppTemplateResponsePrivate(
    GetInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetInAppTemplate response element from \a xml.
 */
void GetInAppTemplateResponsePrivate::parseGetInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

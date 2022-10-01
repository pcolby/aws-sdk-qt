// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplateactiveversionresponse.h"
#include "updatetemplateactiveversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateTemplateActiveVersionResponse
 * \brief The UpdateTemplateActiveVersionResponse class provides an interace for Pinpoint UpdateTemplateActiveVersion responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateTemplateActiveVersion
 */

/*!
 * Constructs a UpdateTemplateActiveVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTemplateActiveVersionResponse::UpdateTemplateActiveVersionResponse(
        const UpdateTemplateActiveVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateTemplateActiveVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateTemplateActiveVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTemplateActiveVersionRequest * UpdateTemplateActiveVersionResponse::request() const
{
    Q_D(const UpdateTemplateActiveVersionResponse);
    return static_cast<const UpdateTemplateActiveVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateTemplateActiveVersion \a response.
 */
void UpdateTemplateActiveVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTemplateActiveVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateTemplateActiveVersionResponsePrivate
 * \brief The UpdateTemplateActiveVersionResponsePrivate class provides private implementation for UpdateTemplateActiveVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateTemplateActiveVersionResponsePrivate object with public implementation \a q.
 */
UpdateTemplateActiveVersionResponsePrivate::UpdateTemplateActiveVersionResponsePrivate(
    UpdateTemplateActiveVersionResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateTemplateActiveVersion response element from \a xml.
 */
void UpdateTemplateActiveVersionResponsePrivate::parseUpdateTemplateActiveVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTemplateActiveVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

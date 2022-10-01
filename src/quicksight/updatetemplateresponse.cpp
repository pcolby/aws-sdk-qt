// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplateresponse.h"
#include "updatetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplateResponse
 * \brief The UpdateTemplateResponse class provides an interace for QuickSight UpdateTemplate responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplate
 */

/*!
 * Constructs a UpdateTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTemplateResponse::UpdateTemplateResponse(
        const UpdateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTemplateRequest * UpdateTemplateResponse::request() const
{
    Q_D(const UpdateTemplateResponse);
    return static_cast<const UpdateTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateTemplate \a response.
 */
void UpdateTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateTemplateResponsePrivate
 * \brief The UpdateTemplateResponsePrivate class provides private implementation for UpdateTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplateResponsePrivate object with public implementation \a q.
 */
UpdateTemplateResponsePrivate::UpdateTemplateResponsePrivate(
    UpdateTemplateResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateTemplate response element from \a xml.
 */
void UpdateTemplateResponsePrivate::parseUpdateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

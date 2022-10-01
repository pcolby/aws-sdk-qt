// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetemplateresponse.h"
#include "deletetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteTemplateResponse
 * \brief The DeleteTemplateResponse class provides an interace for QuickSight DeleteTemplate responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTemplate
 */

/*!
 * Constructs a DeleteTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTemplateResponse::DeleteTemplateResponse(
        const DeleteTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTemplateRequest * DeleteTemplateResponse::request() const
{
    Q_D(const DeleteTemplateResponse);
    return static_cast<const DeleteTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteTemplate \a response.
 */
void DeleteTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteTemplateResponsePrivate
 * \brief The DeleteTemplateResponsePrivate class provides private implementation for DeleteTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteTemplateResponsePrivate object with public implementation \a q.
 */
DeleteTemplateResponsePrivate::DeleteTemplateResponsePrivate(
    DeleteTemplateResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteTemplate response element from \a xml.
 */
void DeleteTemplateResponsePrivate::parseDeleteTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

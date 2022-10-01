// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplatealiasresponse.h"
#include "updatetemplatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplateAliasResponse
 * \brief The UpdateTemplateAliasResponse class provides an interace for QuickSight UpdateTemplateAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplateAlias
 */

/*!
 * Constructs a UpdateTemplateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTemplateAliasResponse::UpdateTemplateAliasResponse(
        const UpdateTemplateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateTemplateAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateTemplateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTemplateAliasRequest * UpdateTemplateAliasResponse::request() const
{
    Q_D(const UpdateTemplateAliasResponse);
    return static_cast<const UpdateTemplateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateTemplateAlias \a response.
 */
void UpdateTemplateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTemplateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateTemplateAliasResponsePrivate
 * \brief The UpdateTemplateAliasResponsePrivate class provides private implementation for UpdateTemplateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplateAliasResponsePrivate object with public implementation \a q.
 */
UpdateTemplateAliasResponsePrivate::UpdateTemplateAliasResponsePrivate(
    UpdateTemplateAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateTemplateAlias response element from \a xml.
 */
void UpdateTemplateAliasResponsePrivate::parseUpdateTemplateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTemplateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

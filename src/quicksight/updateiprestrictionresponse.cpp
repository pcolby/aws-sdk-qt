// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateiprestrictionresponse.h"
#include "updateiprestrictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionResponse
 * \brief The UpdateIpRestrictionResponse class provides an interace for QuickSight UpdateIpRestriction responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateIpRestriction
 */

/*!
 * Constructs a UpdateIpRestrictionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIpRestrictionResponse::UpdateIpRestrictionResponse(
        const UpdateIpRestrictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateIpRestrictionResponsePrivate(this), parent)
{
    setRequest(new UpdateIpRestrictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIpRestrictionRequest * UpdateIpRestrictionResponse::request() const
{
    Q_D(const UpdateIpRestrictionResponse);
    return static_cast<const UpdateIpRestrictionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateIpRestriction \a response.
 */
void UpdateIpRestrictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIpRestrictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionResponsePrivate
 * \brief The UpdateIpRestrictionResponsePrivate class provides private implementation for UpdateIpRestrictionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateIpRestrictionResponsePrivate object with public implementation \a q.
 */
UpdateIpRestrictionResponsePrivate::UpdateIpRestrictionResponsePrivate(
    UpdateIpRestrictionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateIpRestriction response element from \a xml.
 */
void UpdateIpRestrictionResponsePrivate::parseUpdateIpRestrictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIpRestrictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateaccountcustomizationresponse.h"
#include "updateaccountcustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAccountCustomizationResponse
 * \brief The UpdateAccountCustomizationResponse class provides an interace for QuickSight UpdateAccountCustomization responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAccountCustomization
 */

/*!
 * Constructs a UpdateAccountCustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccountCustomizationResponse::UpdateAccountCustomizationResponse(
        const UpdateAccountCustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateAccountCustomizationResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountCustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccountCustomizationRequest * UpdateAccountCustomizationResponse::request() const
{
    Q_D(const UpdateAccountCustomizationResponse);
    return static_cast<const UpdateAccountCustomizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateAccountCustomization \a response.
 */
void UpdateAccountCustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccountCustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateAccountCustomizationResponsePrivate
 * \brief The UpdateAccountCustomizationResponsePrivate class provides private implementation for UpdateAccountCustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAccountCustomizationResponsePrivate object with public implementation \a q.
 */
UpdateAccountCustomizationResponsePrivate::UpdateAccountCustomizationResponsePrivate(
    UpdateAccountCustomizationResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateAccountCustomization response element from \a xml.
 */
void UpdateAccountCustomizationResponsePrivate::parseUpdateAccountCustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountCustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

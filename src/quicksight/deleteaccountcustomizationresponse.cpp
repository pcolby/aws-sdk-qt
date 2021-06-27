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

#include "deleteaccountcustomizationresponse.h"
#include "deleteaccountcustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteAccountCustomizationResponse
 * \brief The DeleteAccountCustomizationResponse class provides an interace for QuickSight DeleteAccountCustomization responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteAccountCustomization
 */

/*!
 * Constructs a DeleteAccountCustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccountCustomizationResponse::DeleteAccountCustomizationResponse(
        const DeleteAccountCustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteAccountCustomizationResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountCustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccountCustomizationRequest * DeleteAccountCustomizationResponse::request() const
{
    return static_cast<const DeleteAccountCustomizationRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteAccountCustomization \a response.
 */
void DeleteAccountCustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccountCustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteAccountCustomizationResponsePrivate
 * \brief The DeleteAccountCustomizationResponsePrivate class provides private implementation for DeleteAccountCustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteAccountCustomizationResponsePrivate object with public implementation \a q.
 */
DeleteAccountCustomizationResponsePrivate::DeleteAccountCustomizationResponsePrivate(
    DeleteAccountCustomizationResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteAccountCustomization response element from \a xml.
 */
void DeleteAccountCustomizationResponsePrivate::parseDeleteAccountCustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountCustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

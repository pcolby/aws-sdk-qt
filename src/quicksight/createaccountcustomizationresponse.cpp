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

#include "createaccountcustomizationresponse.h"
#include "createaccountcustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateAccountCustomizationResponse
 * \brief The CreateAccountCustomizationResponse class provides an interace for QuickSight CreateAccountCustomization responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createAccountCustomization
 */

/*!
 * Constructs a CreateAccountCustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccountCustomizationResponse::CreateAccountCustomizationResponse(
        const CreateAccountCustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateAccountCustomizationResponsePrivate(this), parent)
{
    setRequest(new CreateAccountCustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccountCustomizationRequest * CreateAccountCustomizationResponse::request() const
{
    return static_cast<const CreateAccountCustomizationRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateAccountCustomization \a response.
 */
void CreateAccountCustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccountCustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateAccountCustomizationResponsePrivate
 * \brief The CreateAccountCustomizationResponsePrivate class provides private implementation for CreateAccountCustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateAccountCustomizationResponsePrivate object with public implementation \a q.
 */
CreateAccountCustomizationResponsePrivate::CreateAccountCustomizationResponsePrivate(
    CreateAccountCustomizationResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateAccountCustomization response element from \a xml.
 */
void CreateAccountCustomizationResponsePrivate::parseCreateAccountCustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccountCustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

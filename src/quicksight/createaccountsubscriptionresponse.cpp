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

#include "createaccountsubscriptionresponse.h"
#include "createaccountsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateAccountSubscriptionResponse
 * \brief The CreateAccountSubscriptionResponse class provides an interace for QuickSight CreateAccountSubscription responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createAccountSubscription
 */

/*!
 * Constructs a CreateAccountSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccountSubscriptionResponse::CreateAccountSubscriptionResponse(
        const CreateAccountSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateAccountSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateAccountSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccountSubscriptionRequest * CreateAccountSubscriptionResponse::request() const
{
    Q_D(const CreateAccountSubscriptionResponse);
    return static_cast<const CreateAccountSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateAccountSubscription \a response.
 */
void CreateAccountSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccountSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateAccountSubscriptionResponsePrivate
 * \brief The CreateAccountSubscriptionResponsePrivate class provides private implementation for CreateAccountSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateAccountSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateAccountSubscriptionResponsePrivate::CreateAccountSubscriptionResponsePrivate(
    CreateAccountSubscriptionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateAccountSubscription response element from \a xml.
 */
void CreateAccountSubscriptionResponsePrivate::parseCreateAccountSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccountSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

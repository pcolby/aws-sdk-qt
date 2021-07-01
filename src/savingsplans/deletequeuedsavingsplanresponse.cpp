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

#include "deletequeuedsavingsplanresponse.h"
#include "deletequeuedsavingsplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DeleteQueuedSavingsPlanResponse
 * \brief The DeleteQueuedSavingsPlanResponse class provides an interace for SavingsPlans DeleteQueuedSavingsPlan responses.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::deleteQueuedSavingsPlan
 */

/*!
 * Constructs a DeleteQueuedSavingsPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQueuedSavingsPlanResponse::DeleteQueuedSavingsPlanResponse(
        const DeleteQueuedSavingsPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SavingsPlansResponse(new DeleteQueuedSavingsPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteQueuedSavingsPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQueuedSavingsPlanRequest * DeleteQueuedSavingsPlanResponse::request() const
{
    Q_D(const DeleteQueuedSavingsPlanResponse);
    return static_cast<const DeleteQueuedSavingsPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SavingsPlans DeleteQueuedSavingsPlan \a response.
 */
void DeleteQueuedSavingsPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQueuedSavingsPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SavingsPlans::DeleteQueuedSavingsPlanResponsePrivate
 * \brief The DeleteQueuedSavingsPlanResponsePrivate class provides private implementation for DeleteQueuedSavingsPlanResponse.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DeleteQueuedSavingsPlanResponsePrivate object with public implementation \a q.
 */
DeleteQueuedSavingsPlanResponsePrivate::DeleteQueuedSavingsPlanResponsePrivate(
    DeleteQueuedSavingsPlanResponse * const q) : SavingsPlansResponsePrivate(q)
{

}

/*!
 * Parses a SavingsPlans DeleteQueuedSavingsPlan response element from \a xml.
 */
void DeleteQueuedSavingsPlanResponsePrivate::parseDeleteQueuedSavingsPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueuedSavingsPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SavingsPlans
} // namespace QtAws

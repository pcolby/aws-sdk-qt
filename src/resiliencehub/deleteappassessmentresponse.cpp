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

#include "deleteappassessmentresponse.h"
#include "deleteappassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DeleteAppAssessmentResponse
 * \brief The DeleteAppAssessmentResponse class provides an interace for ResilienceHub DeleteAppAssessment responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::deleteAppAssessment
 */

/*!
 * Constructs a DeleteAppAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppAssessmentResponse::DeleteAppAssessmentResponse(
        const DeleteAppAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DeleteAppAssessmentResponsePrivate(this), parent)
{
    setRequest(new DeleteAppAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppAssessmentRequest * DeleteAppAssessmentResponse::request() const
{
    Q_D(const DeleteAppAssessmentResponse);
    return static_cast<const DeleteAppAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DeleteAppAssessment \a response.
 */
void DeleteAppAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DeleteAppAssessmentResponsePrivate
 * \brief The DeleteAppAssessmentResponsePrivate class provides private implementation for DeleteAppAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DeleteAppAssessmentResponsePrivate object with public implementation \a q.
 */
DeleteAppAssessmentResponsePrivate::DeleteAppAssessmentResponsePrivate(
    DeleteAppAssessmentResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DeleteAppAssessment response element from \a xml.
 */
void DeleteAppAssessmentResponsePrivate::parseDeleteAppAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

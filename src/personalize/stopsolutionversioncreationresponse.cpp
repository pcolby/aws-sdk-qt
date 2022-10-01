// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsolutionversioncreationresponse.h"
#include "stopsolutionversioncreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StopSolutionVersionCreationResponse
 * \brief The StopSolutionVersionCreationResponse class provides an interace for Personalize StopSolutionVersionCreation responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::stopSolutionVersionCreation
 */

/*!
 * Constructs a StopSolutionVersionCreationResponse object for \a reply to \a request, with parent \a parent.
 */
StopSolutionVersionCreationResponse::StopSolutionVersionCreationResponse(
        const StopSolutionVersionCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new StopSolutionVersionCreationResponsePrivate(this), parent)
{
    setRequest(new StopSolutionVersionCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSolutionVersionCreationRequest * StopSolutionVersionCreationResponse::request() const
{
    Q_D(const StopSolutionVersionCreationResponse);
    return static_cast<const StopSolutionVersionCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize StopSolutionVersionCreation \a response.
 */
void StopSolutionVersionCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSolutionVersionCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::StopSolutionVersionCreationResponsePrivate
 * \brief The StopSolutionVersionCreationResponsePrivate class provides private implementation for StopSolutionVersionCreationResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StopSolutionVersionCreationResponsePrivate object with public implementation \a q.
 */
StopSolutionVersionCreationResponsePrivate::StopSolutionVersionCreationResponsePrivate(
    StopSolutionVersionCreationResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize StopSolutionVersionCreation response element from \a xml.
 */
void StopSolutionVersionCreationResponsePrivate::parseStopSolutionVersionCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSolutionVersionCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttopicsdetectionjobresponse.h"
#include "starttopicsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobResponse
 * \brief The StartTopicsDetectionJobResponse class provides an interace for Comprehend StartTopicsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startTopicsDetectionJob
 */

/*!
 * Constructs a StartTopicsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTopicsDetectionJobResponse::StartTopicsDetectionJobResponse(
        const StartTopicsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartTopicsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartTopicsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTopicsDetectionJobRequest * StartTopicsDetectionJobResponse::request() const
{
    Q_D(const StartTopicsDetectionJobResponse);
    return static_cast<const StartTopicsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartTopicsDetectionJob \a response.
 */
void StartTopicsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTopicsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobResponsePrivate
 * \brief The StartTopicsDetectionJobResponsePrivate class provides private implementation for StartTopicsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartTopicsDetectionJobResponsePrivate object with public implementation \a q.
 */
StartTopicsDetectionJobResponsePrivate::StartTopicsDetectionJobResponsePrivate(
    StartTopicsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartTopicsDetectionJob response element from \a xml.
 */
void StartTopicsDetectionJobResponsePrivate::parseStartTopicsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTopicsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws

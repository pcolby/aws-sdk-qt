// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbatchjobresponse.h"
#include "startbatchjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::StartBatchJobResponse
 * \brief The StartBatchJobResponse class provides an interace for M2 StartBatchJob responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::startBatchJob
 */

/*!
 * Constructs a StartBatchJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartBatchJobResponse::StartBatchJobResponse(
        const StartBatchJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new StartBatchJobResponsePrivate(this), parent)
{
    setRequest(new StartBatchJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBatchJobRequest * StartBatchJobResponse::request() const
{
    Q_D(const StartBatchJobResponse);
    return static_cast<const StartBatchJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 StartBatchJob \a response.
 */
void StartBatchJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBatchJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::StartBatchJobResponsePrivate
 * \brief The StartBatchJobResponsePrivate class provides private implementation for StartBatchJobResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a StartBatchJobResponsePrivate object with public implementation \a q.
 */
StartBatchJobResponsePrivate::StartBatchJobResponsePrivate(
    StartBatchJobResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 StartBatchJob response element from \a xml.
 */
void StartBatchJobResponsePrivate::parseStartBatchJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBatchJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

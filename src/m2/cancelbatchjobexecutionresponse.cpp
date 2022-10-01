// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelbatchjobexecutionresponse.h"
#include "cancelbatchjobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::CancelBatchJobExecutionResponse
 * \brief The CancelBatchJobExecutionResponse class provides an interace for M2 CancelBatchJobExecution responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::cancelBatchJobExecution
 */

/*!
 * Constructs a CancelBatchJobExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelBatchJobExecutionResponse::CancelBatchJobExecutionResponse(
        const CancelBatchJobExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new CancelBatchJobExecutionResponsePrivate(this), parent)
{
    setRequest(new CancelBatchJobExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelBatchJobExecutionRequest * CancelBatchJobExecutionResponse::request() const
{
    Q_D(const CancelBatchJobExecutionResponse);
    return static_cast<const CancelBatchJobExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 CancelBatchJobExecution \a response.
 */
void CancelBatchJobExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelBatchJobExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::CancelBatchJobExecutionResponsePrivate
 * \brief The CancelBatchJobExecutionResponsePrivate class provides private implementation for CancelBatchJobExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a CancelBatchJobExecutionResponsePrivate object with public implementation \a q.
 */
CancelBatchJobExecutionResponsePrivate::CancelBatchJobExecutionResponsePrivate(
    CancelBatchJobExecutionResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 CancelBatchJobExecution response element from \a xml.
 */
void CancelBatchJobExecutionResponsePrivate::parseCancelBatchJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelBatchJobExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

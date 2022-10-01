// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbatchjobexecutionresponse.h"
#include "getbatchjobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetBatchJobExecutionResponse
 * \brief The GetBatchJobExecutionResponse class provides an interace for M2 GetBatchJobExecution responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getBatchJobExecution
 */

/*!
 * Constructs a GetBatchJobExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
GetBatchJobExecutionResponse::GetBatchJobExecutionResponse(
        const GetBatchJobExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new GetBatchJobExecutionResponsePrivate(this), parent)
{
    setRequest(new GetBatchJobExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBatchJobExecutionRequest * GetBatchJobExecutionResponse::request() const
{
    Q_D(const GetBatchJobExecutionResponse);
    return static_cast<const GetBatchJobExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 GetBatchJobExecution \a response.
 */
void GetBatchJobExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBatchJobExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::GetBatchJobExecutionResponsePrivate
 * \brief The GetBatchJobExecutionResponsePrivate class provides private implementation for GetBatchJobExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetBatchJobExecutionResponsePrivate object with public implementation \a q.
 */
GetBatchJobExecutionResponsePrivate::GetBatchJobExecutionResponsePrivate(
    GetBatchJobExecutionResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 GetBatchJobExecution response element from \a xml.
 */
void GetBatchJobExecutionResponsePrivate::parseGetBatchJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBatchJobExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

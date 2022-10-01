// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetimporttaskresponse.h"
#include "getdatasetimporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetDataSetImportTaskResponse
 * \brief The GetDataSetImportTaskResponse class provides an interace for M2 GetDataSetImportTask responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getDataSetImportTask
 */

/*!
 * Constructs a GetDataSetImportTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataSetImportTaskResponse::GetDataSetImportTaskResponse(
        const GetDataSetImportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new GetDataSetImportTaskResponsePrivate(this), parent)
{
    setRequest(new GetDataSetImportTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataSetImportTaskRequest * GetDataSetImportTaskResponse::request() const
{
    Q_D(const GetDataSetImportTaskResponse);
    return static_cast<const GetDataSetImportTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 GetDataSetImportTask \a response.
 */
void GetDataSetImportTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataSetImportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::GetDataSetImportTaskResponsePrivate
 * \brief The GetDataSetImportTaskResponsePrivate class provides private implementation for GetDataSetImportTaskResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetDataSetImportTaskResponsePrivate object with public implementation \a q.
 */
GetDataSetImportTaskResponsePrivate::GetDataSetImportTaskResponsePrivate(
    GetDataSetImportTaskResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 GetDataSetImportTask response element from \a xml.
 */
void GetDataSetImportTaskResponsePrivate::parseGetDataSetImportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataSetImportTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

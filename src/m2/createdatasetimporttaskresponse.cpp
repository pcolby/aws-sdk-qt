// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetimporttaskresponse.h"
#include "createdatasetimporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::CreateDataSetImportTaskResponse
 * \brief The CreateDataSetImportTaskResponse class provides an interace for M2 CreateDataSetImportTask responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::createDataSetImportTask
 */

/*!
 * Constructs a CreateDataSetImportTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataSetImportTaskResponse::CreateDataSetImportTaskResponse(
        const CreateDataSetImportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new CreateDataSetImportTaskResponsePrivate(this), parent)
{
    setRequest(new CreateDataSetImportTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSetImportTaskRequest * CreateDataSetImportTaskResponse::request() const
{
    Q_D(const CreateDataSetImportTaskResponse);
    return static_cast<const CreateDataSetImportTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 CreateDataSetImportTask \a response.
 */
void CreateDataSetImportTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSetImportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::CreateDataSetImportTaskResponsePrivate
 * \brief The CreateDataSetImportTaskResponsePrivate class provides private implementation for CreateDataSetImportTaskResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a CreateDataSetImportTaskResponsePrivate object with public implementation \a q.
 */
CreateDataSetImportTaskResponsePrivate::CreateDataSetImportTaskResponsePrivate(
    CreateDataSetImportTaskResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 CreateDataSetImportTask response element from \a xml.
 */
void CreateDataSetImportTaskResponsePrivate::parseCreateDataSetImportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSetImportTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

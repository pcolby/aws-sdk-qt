// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworldexportjobresponse.h"
#include "createworldexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldExportJobResponse
 * \brief The CreateWorldExportJobResponse class provides an interace for RoboMaker CreateWorldExportJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldExportJob
 */

/*!
 * Constructs a CreateWorldExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorldExportJobResponse::CreateWorldExportJobResponse(
        const CreateWorldExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateWorldExportJobResponsePrivate(this), parent)
{
    setRequest(new CreateWorldExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorldExportJobRequest * CreateWorldExportJobResponse::request() const
{
    Q_D(const CreateWorldExportJobResponse);
    return static_cast<const CreateWorldExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateWorldExportJob \a response.
 */
void CreateWorldExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorldExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateWorldExportJobResponsePrivate
 * \brief The CreateWorldExportJobResponsePrivate class provides private implementation for CreateWorldExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldExportJobResponsePrivate object with public implementation \a q.
 */
CreateWorldExportJobResponsePrivate::CreateWorldExportJobResponsePrivate(
    CreateWorldExportJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateWorldExportJob response element from \a xml.
 */
void CreateWorldExportJobResponsePrivate::parseCreateWorldExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorldExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws

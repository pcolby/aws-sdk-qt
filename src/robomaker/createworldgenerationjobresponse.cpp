// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworldgenerationjobresponse.h"
#include "createworldgenerationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldGenerationJobResponse
 * \brief The CreateWorldGenerationJobResponse class provides an interace for RoboMaker CreateWorldGenerationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldGenerationJob
 */

/*!
 * Constructs a CreateWorldGenerationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorldGenerationJobResponse::CreateWorldGenerationJobResponse(
        const CreateWorldGenerationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateWorldGenerationJobResponsePrivate(this), parent)
{
    setRequest(new CreateWorldGenerationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorldGenerationJobRequest * CreateWorldGenerationJobResponse::request() const
{
    Q_D(const CreateWorldGenerationJobResponse);
    return static_cast<const CreateWorldGenerationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateWorldGenerationJob \a response.
 */
void CreateWorldGenerationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorldGenerationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateWorldGenerationJobResponsePrivate
 * \brief The CreateWorldGenerationJobResponsePrivate class provides private implementation for CreateWorldGenerationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldGenerationJobResponsePrivate object with public implementation \a q.
 */
CreateWorldGenerationJobResponsePrivate::CreateWorldGenerationJobResponsePrivate(
    CreateWorldGenerationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateWorldGenerationJob response element from \a xml.
 */
void CreateWorldGenerationJobResponsePrivate::parseCreateWorldGenerationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorldGenerationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws

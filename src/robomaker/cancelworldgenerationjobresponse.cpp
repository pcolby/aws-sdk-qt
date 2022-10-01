// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelworldgenerationjobresponse.h"
#include "cancelworldgenerationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobResponse
 * \brief The CancelWorldGenerationJobResponse class provides an interace for RoboMaker CancelWorldGenerationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldGenerationJob
 */

/*!
 * Constructs a CancelWorldGenerationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelWorldGenerationJobResponse::CancelWorldGenerationJobResponse(
        const CancelWorldGenerationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelWorldGenerationJobResponsePrivate(this), parent)
{
    setRequest(new CancelWorldGenerationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelWorldGenerationJobRequest * CancelWorldGenerationJobResponse::request() const
{
    Q_D(const CancelWorldGenerationJobResponse);
    return static_cast<const CancelWorldGenerationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelWorldGenerationJob \a response.
 */
void CancelWorldGenerationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelWorldGenerationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobResponsePrivate
 * \brief The CancelWorldGenerationJobResponsePrivate class provides private implementation for CancelWorldGenerationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldGenerationJobResponsePrivate object with public implementation \a q.
 */
CancelWorldGenerationJobResponsePrivate::CancelWorldGenerationJobResponsePrivate(
    CancelWorldGenerationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelWorldGenerationJob response element from \a xml.
 */
void CancelWorldGenerationJobResponsePrivate::parseCancelWorldGenerationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelWorldGenerationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws

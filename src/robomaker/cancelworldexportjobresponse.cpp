// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelworldexportjobresponse.h"
#include "cancelworldexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldExportJobResponse
 * \brief The CancelWorldExportJobResponse class provides an interace for RoboMaker CancelWorldExportJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldExportJob
 */

/*!
 * Constructs a CancelWorldExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelWorldExportJobResponse::CancelWorldExportJobResponse(
        const CancelWorldExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelWorldExportJobResponsePrivate(this), parent)
{
    setRequest(new CancelWorldExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelWorldExportJobRequest * CancelWorldExportJobResponse::request() const
{
    Q_D(const CancelWorldExportJobResponse);
    return static_cast<const CancelWorldExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelWorldExportJob \a response.
 */
void CancelWorldExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelWorldExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelWorldExportJobResponsePrivate
 * \brief The CancelWorldExportJobResponsePrivate class provides private implementation for CancelWorldExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldExportJobResponsePrivate object with public implementation \a q.
 */
CancelWorldExportJobResponsePrivate::CancelWorldExportJobResponsePrivate(
    CancelWorldExportJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelWorldExportJob response element from \a xml.
 */
void CancelWorldExportJobResponsePrivate::parseCancelWorldExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelWorldExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportjobresponse.h"
#include "getexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobResponse
 * \brief The GetExportJobResponse class provides an interace for Pinpoint GetExportJob responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getExportJob
 */

/*!
 * Constructs a GetExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetExportJobResponse::GetExportJobResponse(
        const GetExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetExportJobResponsePrivate(this), parent)
{
    setRequest(new GetExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExportJobRequest * GetExportJobResponse::request() const
{
    Q_D(const GetExportJobResponse);
    return static_cast<const GetExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetExportJob \a response.
 */
void GetExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetExportJobResponsePrivate
 * \brief The GetExportJobResponsePrivate class provides private implementation for GetExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobResponsePrivate object with public implementation \a q.
 */
GetExportJobResponsePrivate::GetExportJobResponsePrivate(
    GetExportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetExportJob response element from \a xml.
 */
void GetExportJobResponsePrivate::parseGetExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

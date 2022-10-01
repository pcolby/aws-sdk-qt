// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportjobresponse.h"
#include "getimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobResponse
 * \brief The GetImportJobResponse class provides an interace for Pinpoint GetImportJob responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getImportJob
 */

/*!
 * Constructs a GetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportJobResponse::GetImportJobResponse(
        const GetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetImportJobResponsePrivate(this), parent)
{
    setRequest(new GetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportJobRequest * GetImportJobResponse::request() const
{
    Q_D(const GetImportJobResponse);
    return static_cast<const GetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetImportJob \a response.
 */
void GetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetImportJobResponsePrivate
 * \brief The GetImportJobResponsePrivate class provides private implementation for GetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetImportJobResponsePrivate object with public implementation \a q.
 */
GetImportJobResponsePrivate::GetImportJobResponsePrivate(
    GetImportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetImportJob response element from \a xml.
 */
void GetImportJobResponsePrivate::parseGetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

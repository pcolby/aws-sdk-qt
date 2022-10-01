// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiosessionmappingresponse.h"
#include "getstudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetStudioSessionMappingResponse
 * \brief The GetStudioSessionMappingResponse class provides an interace for Emr GetStudioSessionMapping responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getStudioSessionMapping
 */

/*!
 * Constructs a GetStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetStudioSessionMappingResponse::GetStudioSessionMappingResponse(
        const GetStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new GetStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStudioSessionMappingRequest * GetStudioSessionMappingResponse::request() const
{
    Q_D(const GetStudioSessionMappingResponse);
    return static_cast<const GetStudioSessionMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr GetStudioSessionMapping \a response.
 */
void GetStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::GetStudioSessionMappingResponsePrivate
 * \brief The GetStudioSessionMappingResponsePrivate class provides private implementation for GetStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
GetStudioSessionMappingResponsePrivate::GetStudioSessionMappingResponsePrivate(
    GetStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr GetStudioSessionMapping response element from \a xml.
 */
void GetStudioSessionMappingResponsePrivate::parseGetStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

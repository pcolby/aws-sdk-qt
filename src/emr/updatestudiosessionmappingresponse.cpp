// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudiosessionmappingresponse.h"
#include "updatestudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::UpdateStudioSessionMappingResponse
 * \brief The UpdateStudioSessionMappingResponse class provides an interace for Emr UpdateStudioSessionMapping responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::updateStudioSessionMapping
 */

/*!
 * Constructs a UpdateStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioSessionMappingResponse::UpdateStudioSessionMappingResponse(
        const UpdateStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new UpdateStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioSessionMappingRequest * UpdateStudioSessionMappingResponse::request() const
{
    Q_D(const UpdateStudioSessionMappingResponse);
    return static_cast<const UpdateStudioSessionMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr UpdateStudioSessionMapping \a response.
 */
void UpdateStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::UpdateStudioSessionMappingResponsePrivate
 * \brief The UpdateStudioSessionMappingResponsePrivate class provides private implementation for UpdateStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a UpdateStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
UpdateStudioSessionMappingResponsePrivate::UpdateStudioSessionMappingResponsePrivate(
    UpdateStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr UpdateStudioSessionMapping response element from \a xml.
 */
void UpdateStudioSessionMappingResponsePrivate::parseUpdateStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

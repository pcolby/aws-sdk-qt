// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiosessionmappingresponse.h"
#include "deletestudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteStudioSessionMappingResponse
 * \brief The DeleteStudioSessionMappingResponse class provides an interace for Emr DeleteStudioSessionMapping responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudioSessionMapping
 */

/*!
 * Constructs a DeleteStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioSessionMappingResponse::DeleteStudioSessionMappingResponse(
        const DeleteStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DeleteStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioSessionMappingRequest * DeleteStudioSessionMappingResponse::request() const
{
    Q_D(const DeleteStudioSessionMappingResponse);
    return static_cast<const DeleteStudioSessionMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DeleteStudioSessionMapping \a response.
 */
void DeleteStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DeleteStudioSessionMappingResponsePrivate
 * \brief The DeleteStudioSessionMappingResponsePrivate class provides private implementation for DeleteStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
DeleteStudioSessionMappingResponsePrivate::DeleteStudioSessionMappingResponsePrivate(
    DeleteStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DeleteStudioSessionMapping response element from \a xml.
 */
void DeleteStudioSessionMappingResponsePrivate::parseDeleteStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

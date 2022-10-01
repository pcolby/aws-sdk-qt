// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiosessionmappingresponse.h"
#include "createstudiosessionmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CreateStudioSessionMappingResponse
 * \brief The CreateStudioSessionMappingResponse class provides an interace for Emr CreateStudioSessionMapping responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createStudioSessionMapping
 */

/*!
 * Constructs a CreateStudioSessionMappingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioSessionMappingResponse::CreateStudioSessionMappingResponse(
        const CreateStudioSessionMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new CreateStudioSessionMappingResponsePrivate(this), parent)
{
    setRequest(new CreateStudioSessionMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioSessionMappingRequest * CreateStudioSessionMappingResponse::request() const
{
    Q_D(const CreateStudioSessionMappingResponse);
    return static_cast<const CreateStudioSessionMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr CreateStudioSessionMapping \a response.
 */
void CreateStudioSessionMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioSessionMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::CreateStudioSessionMappingResponsePrivate
 * \brief The CreateStudioSessionMappingResponsePrivate class provides private implementation for CreateStudioSessionMappingResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CreateStudioSessionMappingResponsePrivate object with public implementation \a q.
 */
CreateStudioSessionMappingResponsePrivate::CreateStudioSessionMappingResponsePrivate(
    CreateStudioSessionMappingResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr CreateStudioSessionMapping response element from \a xml.
 */
void CreateStudioSessionMappingResponsePrivate::parseCreateStudioSessionMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioSessionMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

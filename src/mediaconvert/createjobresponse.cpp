// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobresponse.h"
#include "createjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateJobResponse
 * \brief The CreateJobResponse class provides an interace for MediaConvert CreateJob responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createJob
 */

/*!
 * Constructs a CreateJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateJobResponse::CreateJobResponse(
        const CreateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CreateJobResponsePrivate(this), parent)
{
    setRequest(new CreateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateJobRequest * CreateJobResponse::request() const
{
    Q_D(const CreateJobResponse);
    return static_cast<const CreateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert CreateJob \a response.
 */
void CreateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::CreateJobResponsePrivate
 * \brief The CreateJobResponsePrivate class provides private implementation for CreateJobResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateJobResponsePrivate object with public implementation \a q.
 */
CreateJobResponsePrivate::CreateJobResponsePrivate(
    CreateJobResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert CreateJob response element from \a xml.
 */
void CreateJobResponsePrivate::parseCreateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejobresponse.h"
#include "updatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateJobResponse
 * \brief The UpdateJobResponse class provides an interace for Glue UpdateJob responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateJob
 */

/*!
 * Constructs a UpdateJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobResponse::UpdateJobResponse(
        const UpdateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateJobResponsePrivate(this), parent)
{
    setRequest(new UpdateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobRequest * UpdateJobResponse::request() const
{
    Q_D(const UpdateJobResponse);
    return static_cast<const UpdateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateJob \a response.
 */
void UpdateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateJobResponsePrivate
 * \brief The UpdateJobResponsePrivate class provides private implementation for UpdateJobResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateJobResponsePrivate object with public implementation \a q.
 */
UpdateJobResponsePrivate::UpdateJobResponsePrivate(
    UpdateJobResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateJob response element from \a xml.
 */
void UpdateJobResponsePrivate::parseUpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

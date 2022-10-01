// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudioresponse.h"
#include "updatestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::UpdateStudioResponse
 * \brief The UpdateStudioResponse class provides an interace for Emr UpdateStudio responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::updateStudio
 */

/*!
 * Constructs a UpdateStudioResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioResponse::UpdateStudioResponse(
        const UpdateStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new UpdateStudioResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioRequest * UpdateStudioResponse::request() const
{
    Q_D(const UpdateStudioResponse);
    return static_cast<const UpdateStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr UpdateStudio \a response.
 */
void UpdateStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::UpdateStudioResponsePrivate
 * \brief The UpdateStudioResponsePrivate class provides private implementation for UpdateStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a UpdateStudioResponsePrivate object with public implementation \a q.
 */
UpdateStudioResponsePrivate::UpdateStudioResponsePrivate(
    UpdateStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr UpdateStudio response element from \a xml.
 */
void UpdateStudioResponsePrivate::parseUpdateStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

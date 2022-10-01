// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexperienceresponse.h"
#include "updateexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateExperienceResponse
 * \brief The UpdateExperienceResponse class provides an interace for Kendra UpdateExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateExperience
 */

/*!
 * Constructs a UpdateExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExperienceResponse::UpdateExperienceResponse(
        const UpdateExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateExperienceResponsePrivate(this), parent)
{
    setRequest(new UpdateExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExperienceRequest * UpdateExperienceResponse::request() const
{
    Q_D(const UpdateExperienceResponse);
    return static_cast<const UpdateExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateExperience \a response.
 */
void UpdateExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateExperienceResponsePrivate
 * \brief The UpdateExperienceResponsePrivate class provides private implementation for UpdateExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateExperienceResponsePrivate object with public implementation \a q.
 */
UpdateExperienceResponsePrivate::UpdateExperienceResponsePrivate(
    UpdateExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateExperience response element from \a xml.
 */
void UpdateExperienceResponsePrivate::parseUpdateExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

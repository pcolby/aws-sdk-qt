/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

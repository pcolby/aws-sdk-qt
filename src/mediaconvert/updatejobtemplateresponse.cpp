/*
    Copyright 2013-2018 Paul Colby

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

#include "updatejobtemplateresponse.h"
#include "updatejobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdateJobTemplateResponse
 * \brief The UpdateJobTemplateResponse class provides an interace for MediaConvert UpdateJobTemplate responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::updateJobTemplate
 */

/*!
 * Constructs a UpdateJobTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobTemplateResponse::UpdateJobTemplateResponse(
        const UpdateJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new UpdateJobTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateJobTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobTemplateRequest * UpdateJobTemplateResponse::request() const
{
    Q_D(const UpdateJobTemplateResponse);
    return static_cast<const UpdateJobTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert UpdateJobTemplate \a response.
 */
void UpdateJobTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::UpdateJobTemplateResponsePrivate
 * \brief The UpdateJobTemplateResponsePrivate class provides private implementation for UpdateJobTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a UpdateJobTemplateResponsePrivate object with public implementation \a q.
 */
UpdateJobTemplateResponsePrivate::UpdateJobTemplateResponsePrivate(
    UpdateJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert UpdateJobTemplate response element from \a xml.
 */
void UpdateJobTemplateResponsePrivate::parseUpdateJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobTemplateResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws

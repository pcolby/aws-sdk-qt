/*
    Copyright 2013-2020 Paul Colby

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

#include "deletejobtemplateresponse.h"
#include "deletejobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeleteJobTemplateResponse
 * \brief The DeleteJobTemplateResponse class provides an interace for MediaConvert DeleteJobTemplate responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deleteJobTemplate
 */

/*!
 * Constructs a DeleteJobTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobTemplateResponse::DeleteJobTemplateResponse(
        const DeleteJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeleteJobTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteJobTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobTemplateRequest * DeleteJobTemplateResponse::request() const
{
    Q_D(const DeleteJobTemplateResponse);
    return static_cast<const DeleteJobTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert DeleteJobTemplate \a response.
 */
void DeleteJobTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::DeleteJobTemplateResponsePrivate
 * \brief The DeleteJobTemplateResponsePrivate class provides private implementation for DeleteJobTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeleteJobTemplateResponsePrivate object with public implementation \a q.
 */
DeleteJobTemplateResponsePrivate::DeleteJobTemplateResponsePrivate(
    DeleteJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert DeleteJobTemplate response element from \a xml.
 */
void DeleteJobTemplateResponsePrivate::parseDeleteJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

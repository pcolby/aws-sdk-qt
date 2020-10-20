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

#include "getjobtemplateresponse.h"
#include "getjobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetJobTemplateResponse
 * \brief The GetJobTemplateResponse class provides an interace for MediaConvert GetJobTemplate responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getJobTemplate
 */

/*!
 * Constructs a GetJobTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobTemplateResponse::GetJobTemplateResponse(
        const GetJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new GetJobTemplateResponsePrivate(this), parent)
{
    setRequest(new GetJobTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobTemplateRequest * GetJobTemplateResponse::request() const
{
    Q_D(const GetJobTemplateResponse);
    return static_cast<const GetJobTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert GetJobTemplate \a response.
 */
void GetJobTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::GetJobTemplateResponsePrivate
 * \brief The GetJobTemplateResponsePrivate class provides private implementation for GetJobTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetJobTemplateResponsePrivate object with public implementation \a q.
 */
GetJobTemplateResponsePrivate::GetJobTemplateResponsePrivate(
    GetJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert GetJobTemplate response element from \a xml.
 */
void GetJobTemplateResponsePrivate::parseGetJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

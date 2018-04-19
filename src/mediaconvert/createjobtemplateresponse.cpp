/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createjobtemplateresponse.h"
#include "createjobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateJobTemplateResponse
 * \brief The CreateJobTemplateResponse class provides an interace for MediaConvert CreateJobTemplate responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createJobTemplate
 */

/*!
 * Constructs a CreateJobTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateJobTemplateResponse::CreateJobTemplateResponse(
        const CreateJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CreateJobTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateJobTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateJobTemplateRequest * CreateJobTemplateResponse::request() const
{
    Q_D(const CreateJobTemplateResponse);
    return static_cast<const CreateJobTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert CreateJobTemplate \a response.
 */
void CreateJobTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::CreateJobTemplateResponsePrivate
 * \brief The CreateJobTemplateResponsePrivate class provides private implementation for CreateJobTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateJobTemplateResponsePrivate object with public implementation \a q.
 */
CreateJobTemplateResponsePrivate::CreateJobTemplateResponsePrivate(
    CreateJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert CreateJobTemplate response element from \a xml.
 */
void CreateJobTemplateResponsePrivate::parseCreateJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobTemplateResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws

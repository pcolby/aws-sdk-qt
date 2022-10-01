// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(CreateJobTemplateResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws

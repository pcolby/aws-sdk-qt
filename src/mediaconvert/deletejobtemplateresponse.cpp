// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

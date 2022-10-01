// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemltransformresponse.h"
#include "updatemltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateMLTransformResponse
 * \brief The UpdateMLTransformResponse class provides an interace for Glue UpdateMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateMLTransform
 */

/*!
 * Constructs a UpdateMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMLTransformResponse::UpdateMLTransformResponse(
        const UpdateMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateMLTransformResponsePrivate(this), parent)
{
    setRequest(new UpdateMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMLTransformRequest * UpdateMLTransformResponse::request() const
{
    Q_D(const UpdateMLTransformResponse);
    return static_cast<const UpdateMLTransformRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateMLTransform \a response.
 */
void UpdateMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateMLTransformResponsePrivate
 * \brief The UpdateMLTransformResponsePrivate class provides private implementation for UpdateMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateMLTransformResponsePrivate object with public implementation \a q.
 */
UpdateMLTransformResponsePrivate::UpdateMLTransformResponsePrivate(
    UpdateMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateMLTransform response element from \a xml.
 */
void UpdateMLTransformResponsePrivate::parseUpdateMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

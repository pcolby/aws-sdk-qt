// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemltransformresponse.h"
#include "deletemltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteMLTransformResponse
 * \brief The DeleteMLTransformResponse class provides an interace for Glue DeleteMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteMLTransform
 */

/*!
 * Constructs a DeleteMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMLTransformResponse::DeleteMLTransformResponse(
        const DeleteMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteMLTransformResponsePrivate(this), parent)
{
    setRequest(new DeleteMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMLTransformRequest * DeleteMLTransformResponse::request() const
{
    Q_D(const DeleteMLTransformResponse);
    return static_cast<const DeleteMLTransformRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteMLTransform \a response.
 */
void DeleteMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteMLTransformResponsePrivate
 * \brief The DeleteMLTransformResponsePrivate class provides private implementation for DeleteMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteMLTransformResponsePrivate object with public implementation \a q.
 */
DeleteMLTransformResponsePrivate::DeleteMLTransformResponsePrivate(
    DeleteMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteMLTransform response element from \a xml.
 */
void DeleteMLTransformResponsePrivate::parseDeleteMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

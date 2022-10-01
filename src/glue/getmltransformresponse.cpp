// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltransformresponse.h"
#include "getmltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformResponse
 * \brief The GetMLTransformResponse class provides an interace for Glue GetMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTransform
 */

/*!
 * Constructs a GetMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTransformResponse::GetMLTransformResponse(
        const GetMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTransformResponsePrivate(this), parent)
{
    setRequest(new GetMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTransformRequest * GetMLTransformResponse::request() const
{
    Q_D(const GetMLTransformResponse);
    return static_cast<const GetMLTransformRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTransform \a response.
 */
void GetMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTransformResponsePrivate
 * \brief The GetMLTransformResponsePrivate class provides private implementation for GetMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformResponsePrivate object with public implementation \a q.
 */
GetMLTransformResponsePrivate::GetMLTransformResponsePrivate(
    GetMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTransform response element from \a xml.
 */
void GetMLTransformResponsePrivate::parseGetMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

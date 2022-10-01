// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmltransformresponse.h"
#include "createmltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateMLTransformResponse
 * \brief The CreateMLTransformResponse class provides an interace for Glue CreateMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createMLTransform
 */

/*!
 * Constructs a CreateMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMLTransformResponse::CreateMLTransformResponse(
        const CreateMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateMLTransformResponsePrivate(this), parent)
{
    setRequest(new CreateMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMLTransformRequest * CreateMLTransformResponse::request() const
{
    Q_D(const CreateMLTransformResponse);
    return static_cast<const CreateMLTransformRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateMLTransform \a response.
 */
void CreateMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateMLTransformResponsePrivate
 * \brief The CreateMLTransformResponsePrivate class provides private implementation for CreateMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateMLTransformResponsePrivate object with public implementation \a q.
 */
CreateMLTransformResponsePrivate::CreateMLTransformResponsePrivate(
    CreateMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateMLTransform response element from \a xml.
 */
void CreateMLTransformResponsePrivate::parseCreateMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

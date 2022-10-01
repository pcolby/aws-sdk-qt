// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltransformsresponse.h"
#include "getmltransformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformsResponse
 * \brief The GetMLTransformsResponse class provides an interace for Glue GetMLTransforms responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTransforms
 */

/*!
 * Constructs a GetMLTransformsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTransformsResponse::GetMLTransformsResponse(
        const GetMLTransformsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTransformsResponsePrivate(this), parent)
{
    setRequest(new GetMLTransformsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTransformsRequest * GetMLTransformsResponse::request() const
{
    Q_D(const GetMLTransformsResponse);
    return static_cast<const GetMLTransformsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTransforms \a response.
 */
void GetMLTransformsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTransformsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTransformsResponsePrivate
 * \brief The GetMLTransformsResponsePrivate class provides private implementation for GetMLTransformsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformsResponsePrivate object with public implementation \a q.
 */
GetMLTransformsResponsePrivate::GetMLTransformsResponsePrivate(
    GetMLTransformsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTransforms response element from \a xml.
 */
void GetMLTransformsResponsePrivate::parseGetMLTransformsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTransformsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

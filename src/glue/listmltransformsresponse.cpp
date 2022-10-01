// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmltransformsresponse.h"
#include "listmltransformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListMLTransformsResponse
 * \brief The ListMLTransformsResponse class provides an interace for Glue ListMLTransforms responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listMLTransforms
 */

/*!
 * Constructs a ListMLTransformsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMLTransformsResponse::ListMLTransformsResponse(
        const ListMLTransformsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListMLTransformsResponsePrivate(this), parent)
{
    setRequest(new ListMLTransformsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMLTransformsRequest * ListMLTransformsResponse::request() const
{
    Q_D(const ListMLTransformsResponse);
    return static_cast<const ListMLTransformsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListMLTransforms \a response.
 */
void ListMLTransformsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMLTransformsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListMLTransformsResponsePrivate
 * \brief The ListMLTransformsResponsePrivate class provides private implementation for ListMLTransformsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListMLTransformsResponsePrivate object with public implementation \a q.
 */
ListMLTransformsResponsePrivate::ListMLTransformsResponsePrivate(
    ListMLTransformsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListMLTransforms response element from \a xml.
 */
void ListMLTransformsResponsePrivate::parseListMLTransformsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMLTransformsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

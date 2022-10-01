// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkschemaversionvalidityresponse.h"
#include "checkschemaversionvalidityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CheckSchemaVersionValidityResponse
 * \brief The CheckSchemaVersionValidityResponse class provides an interace for Glue CheckSchemaVersionValidity responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::checkSchemaVersionValidity
 */

/*!
 * Constructs a CheckSchemaVersionValidityResponse object for \a reply to \a request, with parent \a parent.
 */
CheckSchemaVersionValidityResponse::CheckSchemaVersionValidityResponse(
        const CheckSchemaVersionValidityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CheckSchemaVersionValidityResponsePrivate(this), parent)
{
    setRequest(new CheckSchemaVersionValidityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckSchemaVersionValidityRequest * CheckSchemaVersionValidityResponse::request() const
{
    Q_D(const CheckSchemaVersionValidityResponse);
    return static_cast<const CheckSchemaVersionValidityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CheckSchemaVersionValidity \a response.
 */
void CheckSchemaVersionValidityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckSchemaVersionValidityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CheckSchemaVersionValidityResponsePrivate
 * \brief The CheckSchemaVersionValidityResponsePrivate class provides private implementation for CheckSchemaVersionValidityResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CheckSchemaVersionValidityResponsePrivate object with public implementation \a q.
 */
CheckSchemaVersionValidityResponsePrivate::CheckSchemaVersionValidityResponsePrivate(
    CheckSchemaVersionValidityResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CheckSchemaVersionValidity response element from \a xml.
 */
void CheckSchemaVersionValidityResponsePrivate::parseCheckSchemaVersionValidityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckSchemaVersionValidityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

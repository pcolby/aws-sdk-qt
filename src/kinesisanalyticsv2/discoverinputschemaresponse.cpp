/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "discoverinputschemaresponse.h"
#include "discoverinputschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DiscoverInputSchemaResponse
 * \brief The DiscoverInputSchemaResponse class provides an interace for KinesisAnalyticsV2 DiscoverInputSchema responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Documentation for Kinesis Data Analytics API
 *
 * \sa KinesisAnalyticsV2Client::discoverInputSchema
 */

/*!
 * Constructs a DiscoverInputSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DiscoverInputSchemaResponse::DiscoverInputSchemaResponse(
        const DiscoverInputSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DiscoverInputSchemaResponsePrivate(this), parent)
{
    setRequest(new DiscoverInputSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DiscoverInputSchemaRequest * DiscoverInputSchemaResponse::request() const
{
    Q_D(const DiscoverInputSchemaResponse);
    return static_cast<const DiscoverInputSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DiscoverInputSchema \a response.
 */
void DiscoverInputSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DiscoverInputSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DiscoverInputSchemaResponsePrivate
 * \brief The DiscoverInputSchemaResponsePrivate class provides private implementation for DiscoverInputSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DiscoverInputSchemaResponsePrivate object with public implementation \a q.
 */
DiscoverInputSchemaResponsePrivate::DiscoverInputSchemaResponsePrivate(
    DiscoverInputSchemaResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DiscoverInputSchema response element from \a xml.
 */
void DiscoverInputSchemaResponsePrivate::parseDiscoverInputSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DiscoverInputSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws

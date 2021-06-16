/*
    Copyright 2013-2021 Paul Colby

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

#include "describecertificatesresponse.h"
#include "describecertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeCertificatesResponse
 * \brief The DescribeCertificatesResponse class provides an interace for DocDB DescribeCertificates responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeCertificates
 */

/*!
 * Constructs a DescribeCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCertificatesResponse::DescribeCertificatesResponse(
        const DescribeCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeCertificatesResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCertificatesRequest * DescribeCertificatesResponse::request() const
{
    Q_D(const DescribeCertificatesResponse);
    return static_cast<const DescribeCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeCertificates \a response.
 */
void DescribeCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeCertificatesResponsePrivate
 * \brief The DescribeCertificatesResponsePrivate class provides private implementation for DescribeCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeCertificatesResponsePrivate object with public implementation \a q.
 */
DescribeCertificatesResponsePrivate::DescribeCertificatesResponsePrivate(
    DescribeCertificatesResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeCertificates response element from \a xml.
 */
void DescribeCertificatesResponsePrivate::parseDescribeCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws

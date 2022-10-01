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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeCertificatesResponse
 * \brief The DescribeCertificatesResponse class provides an interace for DocDb DescribeCertificates responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeCertificates
 */

/*!
 * Constructs a DescribeCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCertificatesResponse::DescribeCertificatesResponse(
        const DescribeCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeCertificatesResponsePrivate(this), parent)
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
 * Parses a successful DocDb DescribeCertificates \a response.
 */
void DescribeCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeCertificatesResponsePrivate
 * \brief The DescribeCertificatesResponsePrivate class provides private implementation for DescribeCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeCertificatesResponsePrivate object with public implementation \a q.
 */
DescribeCertificatesResponsePrivate::DescribeCertificatesResponsePrivate(
    DescribeCertificatesResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeCertificates response element from \a xml.
 */
void DescribeCertificatesResponsePrivate::parseDescribeCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws

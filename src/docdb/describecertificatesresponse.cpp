// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

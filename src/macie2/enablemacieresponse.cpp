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

#include "enablemacieresponse.h"
#include "enablemacieresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::EnableMacieResponse
 * \brief The EnableMacieResponse class provides an interace for Macie2 EnableMacie responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::enableMacie
 */

/*!
 * Constructs a EnableMacieResponse object for \a reply to \a request, with parent \a parent.
 */
EnableMacieResponse::EnableMacieResponse(
        const EnableMacieRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new EnableMacieResponsePrivate(this), parent)
{
    setRequest(new EnableMacieRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableMacieRequest * EnableMacieResponse::request() const
{
    Q_D(const EnableMacieResponse);
    return static_cast<const EnableMacieRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 EnableMacie \a response.
 */
void EnableMacieResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableMacieResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::EnableMacieResponsePrivate
 * \brief The EnableMacieResponsePrivate class provides private implementation for EnableMacieResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a EnableMacieResponsePrivate object with public implementation \a q.
 */
EnableMacieResponsePrivate::EnableMacieResponsePrivate(
    EnableMacieResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 EnableMacie response element from \a xml.
 */
void EnableMacieResponsePrivate::parseEnableMacieResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableMacieResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws

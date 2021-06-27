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

#include "describepageresponse.h"
#include "describepageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DescribePageResponse
 * \brief The DescribePageResponse class provides an interace for SSMContacts DescribePage responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::describePage
 */

/*!
 * Constructs a DescribePageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePageResponse::DescribePageResponse(
        const DescribePageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new DescribePageResponsePrivate(this), parent)
{
    setRequest(new DescribePageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePageRequest * DescribePageResponse::request() const
{
    return static_cast<const DescribePageRequest *>(SSMContactsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMContacts DescribePage \a response.
 */
void DescribePageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::DescribePageResponsePrivate
 * \brief The DescribePageResponsePrivate class provides private implementation for DescribePageResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DescribePageResponsePrivate object with public implementation \a q.
 */
DescribePageResponsePrivate::DescribePageResponsePrivate(
    DescribePageResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts DescribePage response element from \a xml.
 */
void DescribePageResponsePrivate::parseDescribePageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws

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

#include "describeengagementresponse.h"
#include "describeengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DescribeEngagementResponse
 * \brief The DescribeEngagementResponse class provides an interace for SSMContacts DescribeEngagement responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::describeEngagement
 */

/*!
 * Constructs a DescribeEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEngagementResponse::DescribeEngagementResponse(
        const DescribeEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new DescribeEngagementResponsePrivate(this), parent)
{
    setRequest(new DescribeEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEngagementRequest * DescribeEngagementResponse::request() const
{
    Q_D(const DescribeEngagementResponse);
    return static_cast<const DescribeEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts DescribeEngagement \a response.
 */
void DescribeEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::DescribeEngagementResponsePrivate
 * \brief The DescribeEngagementResponsePrivate class provides private implementation for DescribeEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DescribeEngagementResponsePrivate object with public implementation \a q.
 */
DescribeEngagementResponsePrivate::DescribeEngagementResponsePrivate(
    DescribeEngagementResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts DescribeEngagement response element from \a xml.
 */
void DescribeEngagementResponsePrivate::parseDescribeEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws

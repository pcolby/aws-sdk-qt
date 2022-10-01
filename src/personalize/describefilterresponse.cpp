// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilterresponse.h"
#include "describefilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeFilterResponse
 * \brief The DescribeFilterResponse class provides an interace for Personalize DescribeFilter responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeFilter
 */

/*!
 * Constructs a DescribeFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFilterResponse::DescribeFilterResponse(
        const DescribeFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeFilterResponsePrivate(this), parent)
{
    setRequest(new DescribeFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFilterRequest * DescribeFilterResponse::request() const
{
    Q_D(const DescribeFilterResponse);
    return static_cast<const DescribeFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeFilter \a response.
 */
void DescribeFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeFilterResponsePrivate
 * \brief The DescribeFilterResponsePrivate class provides private implementation for DescribeFilterResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeFilterResponsePrivate object with public implementation \a q.
 */
DescribeFilterResponsePrivate::DescribeFilterResponsePrivate(
    DescribeFilterResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeFilter response element from \a xml.
 */
void DescribeFilterResponsePrivate::parseDescribeFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

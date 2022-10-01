// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschemaresponse.h"
#include "describeschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSchemaResponse
 * \brief The DescribeSchemaResponse class provides an interace for Personalize DescribeSchema responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSchema
 */

/*!
 * Constructs a DescribeSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSchemaResponse::DescribeSchemaResponse(
        const DescribeSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeSchemaResponsePrivate(this), parent)
{
    setRequest(new DescribeSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSchemaRequest * DescribeSchemaResponse::request() const
{
    Q_D(const DescribeSchemaResponse);
    return static_cast<const DescribeSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeSchema \a response.
 */
void DescribeSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeSchemaResponsePrivate
 * \brief The DescribeSchemaResponsePrivate class provides private implementation for DescribeSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSchemaResponsePrivate object with public implementation \a q.
 */
DescribeSchemaResponsePrivate::DescribeSchemaResponsePrivate(
    DescribeSchemaResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeSchema response element from \a xml.
 */
void DescribeSchemaResponsePrivate::parseDescribeSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

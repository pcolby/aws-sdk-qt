// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexperienceresponse.h"
#include "describeexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeExperienceResponse
 * \brief The DescribeExperienceResponse class provides an interace for Kendra DescribeExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeExperience
 */

/*!
 * Constructs a DescribeExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExperienceResponse::DescribeExperienceResponse(
        const DescribeExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeExperienceResponsePrivate(this), parent)
{
    setRequest(new DescribeExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExperienceRequest * DescribeExperienceResponse::request() const
{
    Q_D(const DescribeExperienceResponse);
    return static_cast<const DescribeExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeExperience \a response.
 */
void DescribeExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeExperienceResponsePrivate
 * \brief The DescribeExperienceResponsePrivate class provides private implementation for DescribeExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeExperienceResponsePrivate object with public implementation \a q.
 */
DescribeExperienceResponsePrivate::DescribeExperienceResponsePrivate(
    DescribeExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeExperience response element from \a xml.
 */
void DescribeExperienceResponsePrivate::parseDescribeExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

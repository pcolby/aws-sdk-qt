// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefaqresponse.h"
#include "describefaqresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeFaqResponse
 * \brief The DescribeFaqResponse class provides an interace for Kendra DescribeFaq responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeFaq
 */

/*!
 * Constructs a DescribeFaqResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFaqResponse::DescribeFaqResponse(
        const DescribeFaqRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeFaqResponsePrivate(this), parent)
{
    setRequest(new DescribeFaqRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFaqRequest * DescribeFaqResponse::request() const
{
    Q_D(const DescribeFaqResponse);
    return static_cast<const DescribeFaqRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeFaq \a response.
 */
void DescribeFaqResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFaqResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeFaqResponsePrivate
 * \brief The DescribeFaqResponsePrivate class provides private implementation for DescribeFaqResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeFaqResponsePrivate object with public implementation \a q.
 */
DescribeFaqResponsePrivate::DescribeFaqResponsePrivate(
    DescribeFaqResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeFaq response element from \a xml.
 */
void DescribeFaqResponsePrivate::parseDescribeFaqResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFaqResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesolutionversionresponse.h"
#include "describesolutionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSolutionVersionResponse
 * \brief The DescribeSolutionVersionResponse class provides an interace for Personalize DescribeSolutionVersion responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSolutionVersion
 */

/*!
 * Constructs a DescribeSolutionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSolutionVersionResponse::DescribeSolutionVersionResponse(
        const DescribeSolutionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeSolutionVersionResponsePrivate(this), parent)
{
    setRequest(new DescribeSolutionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSolutionVersionRequest * DescribeSolutionVersionResponse::request() const
{
    Q_D(const DescribeSolutionVersionResponse);
    return static_cast<const DescribeSolutionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeSolutionVersion \a response.
 */
void DescribeSolutionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSolutionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeSolutionVersionResponsePrivate
 * \brief The DescribeSolutionVersionResponsePrivate class provides private implementation for DescribeSolutionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSolutionVersionResponsePrivate object with public implementation \a q.
 */
DescribeSolutionVersionResponsePrivate::DescribeSolutionVersionResponsePrivate(
    DescribeSolutionVersionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeSolutionVersion response element from \a xml.
 */
void DescribeSolutionVersionResponsePrivate::parseDescribeSolutionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSolutionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

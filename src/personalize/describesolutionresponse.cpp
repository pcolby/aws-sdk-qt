// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesolutionresponse.h"
#include "describesolutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSolutionResponse
 * \brief The DescribeSolutionResponse class provides an interace for Personalize DescribeSolution responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSolution
 */

/*!
 * Constructs a DescribeSolutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSolutionResponse::DescribeSolutionResponse(
        const DescribeSolutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeSolutionResponsePrivate(this), parent)
{
    setRequest(new DescribeSolutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSolutionRequest * DescribeSolutionResponse::request() const
{
    Q_D(const DescribeSolutionResponse);
    return static_cast<const DescribeSolutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeSolution \a response.
 */
void DescribeSolutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSolutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeSolutionResponsePrivate
 * \brief The DescribeSolutionResponsePrivate class provides private implementation for DescribeSolutionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSolutionResponsePrivate object with public implementation \a q.
 */
DescribeSolutionResponsePrivate::DescribeSolutionResponsePrivate(
    DescribeSolutionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeSolution response element from \a xml.
 */
void DescribeSolutionResponsePrivate::parseDescribeSolutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSolutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

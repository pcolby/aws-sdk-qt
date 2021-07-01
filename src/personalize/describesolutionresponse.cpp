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

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
    return static_cast<const DescribeSolutionVersionRequest *>(PersonalizeResponse::request());
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

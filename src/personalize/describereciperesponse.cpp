/*
    Copyright 2013-2020 Paul Colby

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

#include "describereciperesponse.h"
#include "describereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeRecipeResponse
 * \brief The DescribeRecipeResponse class provides an interace for Personalize DescribeRecipe responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeRecipe
 */

/*!
 * Constructs a DescribeRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecipeResponse::DescribeRecipeResponse(
        const DescribeRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeRecipeResponsePrivate(this), parent)
{
    setRequest(new DescribeRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRecipeRequest * DescribeRecipeResponse::request() const
{
    Q_D(const DescribeRecipeResponse);
    return static_cast<const DescribeRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeRecipe \a response.
 */
void DescribeRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeRecipeResponsePrivate
 * \brief The DescribeRecipeResponsePrivate class provides private implementation for DescribeRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeRecipeResponsePrivate object with public implementation \a q.
 */
DescribeRecipeResponsePrivate::DescribeRecipeResponsePrivate(
    DescribeRecipeResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeRecipe response element from \a xml.
 */
void DescribeRecipeResponsePrivate::parseDescribeRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

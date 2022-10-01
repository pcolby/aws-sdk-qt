// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereciperesponse.h"
#include "describereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeRecipeResponse
 * \brief The DescribeRecipeResponse class provides an interace for DataBrew DescribeRecipe responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeRecipe
 */

/*!
 * Constructs a DescribeRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecipeResponse::DescribeRecipeResponse(
        const DescribeRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DescribeRecipeResponsePrivate(this), parent)
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
 * Parses a successful DataBrew DescribeRecipe \a response.
 */
void DescribeRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DescribeRecipeResponsePrivate
 * \brief The DescribeRecipeResponsePrivate class provides private implementation for DescribeRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeRecipeResponsePrivate object with public implementation \a q.
 */
DescribeRecipeResponsePrivate::DescribeRecipeResponsePrivate(
    DescribeRecipeResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DescribeRecipe response element from \a xml.
 */
void DescribeRecipeResponsePrivate::parseDescribeRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws

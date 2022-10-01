// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetdetailsresponse.h"
#include "getdatasetdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetDataSetDetailsResponse
 * \brief The GetDataSetDetailsResponse class provides an interace for M2 GetDataSetDetails responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getDataSetDetails
 */

/*!
 * Constructs a GetDataSetDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataSetDetailsResponse::GetDataSetDetailsResponse(
        const GetDataSetDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new GetDataSetDetailsResponsePrivate(this), parent)
{
    setRequest(new GetDataSetDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataSetDetailsRequest * GetDataSetDetailsResponse::request() const
{
    Q_D(const GetDataSetDetailsResponse);
    return static_cast<const GetDataSetDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 GetDataSetDetails \a response.
 */
void GetDataSetDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataSetDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::GetDataSetDetailsResponsePrivate
 * \brief The GetDataSetDetailsResponsePrivate class provides private implementation for GetDataSetDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetDataSetDetailsResponsePrivate object with public implementation \a q.
 */
GetDataSetDetailsResponsePrivate::GetDataSetDetailsResponsePrivate(
    GetDataSetDetailsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 GetDataSetDetails response element from \a xml.
 */
void GetDataSetDetailsResponsePrivate::parseGetDataSetDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataSetDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

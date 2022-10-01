// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationversionresponse.h"
#include "getapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetApplicationVersionResponse
 * \brief The GetApplicationVersionResponse class provides an interace for M2 GetApplicationVersion responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getApplicationVersion
 */

/*!
 * Constructs a GetApplicationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationVersionResponse::GetApplicationVersionResponse(
        const GetApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new GetApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new GetApplicationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationVersionRequest * GetApplicationVersionResponse::request() const
{
    Q_D(const GetApplicationVersionResponse);
    return static_cast<const GetApplicationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 GetApplicationVersion \a response.
 */
void GetApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::GetApplicationVersionResponsePrivate
 * \brief The GetApplicationVersionResponsePrivate class provides private implementation for GetApplicationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetApplicationVersionResponsePrivate object with public implementation \a q.
 */
GetApplicationVersionResponsePrivate::GetApplicationVersionResponsePrivate(
    GetApplicationVersionResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 GetApplicationVersion response element from \a xml.
 */
void GetApplicationVersionResponsePrivate::parseGetApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

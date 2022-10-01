// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getenvironmentresponse.h"
#include "getenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetEnvironmentResponse
 * \brief The GetEnvironmentResponse class provides an interace for M2 GetEnvironment responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getEnvironment
 */

/*!
 * Constructs a GetEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetEnvironmentResponse::GetEnvironmentResponse(
        const GetEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new GetEnvironmentResponsePrivate(this), parent)
{
    setRequest(new GetEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEnvironmentRequest * GetEnvironmentResponse::request() const
{
    Q_D(const GetEnvironmentResponse);
    return static_cast<const GetEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 GetEnvironment \a response.
 */
void GetEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::GetEnvironmentResponsePrivate
 * \brief The GetEnvironmentResponsePrivate class provides private implementation for GetEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetEnvironmentResponsePrivate object with public implementation \a q.
 */
GetEnvironmentResponsePrivate::GetEnvironmentResponsePrivate(
    GetEnvironmentResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 GetEnvironment response element from \a xml.
 */
void GetEnvironmentResponsePrivate::parseGetEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

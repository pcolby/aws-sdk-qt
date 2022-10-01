// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopapplicationresponse.h"
#include "stopapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::StopApplicationResponse
 * \brief The StopApplicationResponse class provides an interace for M2 StopApplication responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::stopApplication
 */

/*!
 * Constructs a StopApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StopApplicationResponse::StopApplicationResponse(
        const StopApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new StopApplicationResponsePrivate(this), parent)
{
    setRequest(new StopApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopApplicationRequest * StopApplicationResponse::request() const
{
    Q_D(const StopApplicationResponse);
    return static_cast<const StopApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 StopApplication \a response.
 */
void StopApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::StopApplicationResponsePrivate
 * \brief The StopApplicationResponsePrivate class provides private implementation for StopApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a StopApplicationResponsePrivate object with public implementation \a q.
 */
StopApplicationResponsePrivate::StopApplicationResponsePrivate(
    StopApplicationResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 StopApplication response element from \a xml.
 */
void StopApplicationResponsePrivate::parseStopApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

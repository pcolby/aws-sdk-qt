// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startapplicationresponse.h"
#include "startapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::StartApplicationResponse
 * \brief The StartApplicationResponse class provides an interace for M2 StartApplication responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::startApplication
 */

/*!
 * Constructs a StartApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StartApplicationResponse::StartApplicationResponse(
        const StartApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new StartApplicationResponsePrivate(this), parent)
{
    setRequest(new StartApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartApplicationRequest * StartApplicationResponse::request() const
{
    Q_D(const StartApplicationResponse);
    return static_cast<const StartApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 StartApplication \a response.
 */
void StartApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::StartApplicationResponsePrivate
 * \brief The StartApplicationResponsePrivate class provides private implementation for StartApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a StartApplicationResponsePrivate object with public implementation \a q.
 */
StartApplicationResponsePrivate::StartApplicationResponsePrivate(
    StartApplicationResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 StartApplication response element from \a xml.
 */
void StartApplicationResponsePrivate::parseStartApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationfromenvironmentresponse.h"
#include "deleteapplicationfromenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::DeleteApplicationFromEnvironmentResponse
 * \brief The DeleteApplicationFromEnvironmentResponse class provides an interace for M2 DeleteApplicationFromEnvironment responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::deleteApplicationFromEnvironment
 */

/*!
 * Constructs a DeleteApplicationFromEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationFromEnvironmentResponse::DeleteApplicationFromEnvironmentResponse(
        const DeleteApplicationFromEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new DeleteApplicationFromEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationFromEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationFromEnvironmentRequest * DeleteApplicationFromEnvironmentResponse::request() const
{
    Q_D(const DeleteApplicationFromEnvironmentResponse);
    return static_cast<const DeleteApplicationFromEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 DeleteApplicationFromEnvironment \a response.
 */
void DeleteApplicationFromEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationFromEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::DeleteApplicationFromEnvironmentResponsePrivate
 * \brief The DeleteApplicationFromEnvironmentResponsePrivate class provides private implementation for DeleteApplicationFromEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a DeleteApplicationFromEnvironmentResponsePrivate object with public implementation \a q.
 */
DeleteApplicationFromEnvironmentResponsePrivate::DeleteApplicationFromEnvironmentResponsePrivate(
    DeleteApplicationFromEnvironmentResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 DeleteApplicationFromEnvironment response element from \a xml.
 */
void DeleteApplicationFromEnvironmentResponsePrivate::parseDeleteApplicationFromEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationFromEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

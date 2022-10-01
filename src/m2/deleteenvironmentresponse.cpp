// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteenvironmentresponse.h"
#include "deleteenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::DeleteEnvironmentResponse
 * \brief The DeleteEnvironmentResponse class provides an interace for M2 DeleteEnvironment responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::deleteEnvironment
 */

/*!
 * Constructs a DeleteEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEnvironmentResponse::DeleteEnvironmentResponse(
        const DeleteEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new DeleteEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEnvironmentRequest * DeleteEnvironmentResponse::request() const
{
    Q_D(const DeleteEnvironmentResponse);
    return static_cast<const DeleteEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 DeleteEnvironment \a response.
 */
void DeleteEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::DeleteEnvironmentResponsePrivate
 * \brief The DeleteEnvironmentResponsePrivate class provides private implementation for DeleteEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a DeleteEnvironmentResponsePrivate object with public implementation \a q.
 */
DeleteEnvironmentResponsePrivate::DeleteEnvironmentResponsePrivate(
    DeleteEnvironmentResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 DeleteEnvironment response element from \a xml.
 */
void DeleteEnvironmentResponsePrivate::parseDeleteEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

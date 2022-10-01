// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenvironmentresponse.h"
#include "updateenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::UpdateEnvironmentResponse
 * \brief The UpdateEnvironmentResponse class provides an interace for M2 UpdateEnvironment responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::updateEnvironment
 */

/*!
 * Constructs a UpdateEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEnvironmentResponse::UpdateEnvironmentResponse(
        const UpdateEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new UpdateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new UpdateEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEnvironmentRequest * UpdateEnvironmentResponse::request() const
{
    Q_D(const UpdateEnvironmentResponse);
    return static_cast<const UpdateEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 UpdateEnvironment \a response.
 */
void UpdateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::UpdateEnvironmentResponsePrivate
 * \brief The UpdateEnvironmentResponsePrivate class provides private implementation for UpdateEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a UpdateEnvironmentResponsePrivate object with public implementation \a q.
 */
UpdateEnvironmentResponsePrivate::UpdateEnvironmentResponsePrivate(
    UpdateEnvironmentResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 UpdateEnvironment response element from \a xml.
 */
void UpdateEnvironmentResponsePrivate::parseUpdateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

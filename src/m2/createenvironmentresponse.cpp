// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentresponse.h"
#include "createenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::CreateEnvironmentResponse
 * \brief The CreateEnvironmentResponse class provides an interace for M2 CreateEnvironment responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::createEnvironment
 */

/*!
 * Constructs a CreateEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEnvironmentResponse::CreateEnvironmentResponse(
        const CreateEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new CreateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEnvironmentRequest * CreateEnvironmentResponse::request() const
{
    Q_D(const CreateEnvironmentResponse);
    return static_cast<const CreateEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 CreateEnvironment \a response.
 */
void CreateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::CreateEnvironmentResponsePrivate
 * \brief The CreateEnvironmentResponsePrivate class provides private implementation for CreateEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a CreateEnvironmentResponsePrivate object with public implementation \a q.
 */
CreateEnvironmentResponsePrivate::CreateEnvironmentResponsePrivate(
    CreateEnvironmentResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 CreateEnvironment response element from \a xml.
 */
void CreateEnvironmentResponsePrivate::parseCreateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws

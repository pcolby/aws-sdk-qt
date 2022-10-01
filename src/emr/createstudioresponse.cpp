// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudioresponse.h"
#include "createstudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CreateStudioResponse
 * \brief The CreateStudioResponse class provides an interace for Emr CreateStudio responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createStudio
 */

/*!
 * Constructs a CreateStudioResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioResponse::CreateStudioResponse(
        const CreateStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new CreateStudioResponsePrivate(this), parent)
{
    setRequest(new CreateStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioRequest * CreateStudioResponse::request() const
{
    Q_D(const CreateStudioResponse);
    return static_cast<const CreateStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr CreateStudio \a response.
 */
void CreateStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::CreateStudioResponsePrivate
 * \brief The CreateStudioResponsePrivate class provides private implementation for CreateStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CreateStudioResponsePrivate object with public implementation \a q.
 */
CreateStudioResponsePrivate::CreateStudioResponsePrivate(
    CreateStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr CreateStudio response element from \a xml.
 */
void CreateStudioResponsePrivate::parseCreateStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimportjobresponse.h"
#include "createimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateImportJobResponse
 * \brief The CreateImportJobResponse class provides an interace for Pinpoint CreateImportJob responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createImportJob
 */

/*!
 * Constructs a CreateImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImportJobResponse::CreateImportJobResponse(
        const CreateImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImportJobRequest * CreateImportJobResponse::request() const
{
    Q_D(const CreateImportJobResponse);
    return static_cast<const CreateImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateImportJob \a response.
 */
void CreateImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateImportJobResponsePrivate
 * \brief The CreateImportJobResponsePrivate class provides private implementation for CreateImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateImportJobResponsePrivate object with public implementation \a q.
 */
CreateImportJobResponsePrivate::CreateImportJobResponsePrivate(
    CreateImportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateImportJob response element from \a xml.
 */
void CreateImportJobResponsePrivate::parseCreateImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createharvestjobresponse.h"
#include "createharvestjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobResponse
 * \brief The CreateHarvestJobResponse class provides an interace for MediaPackage CreateHarvestJob responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createHarvestJob
 */

/*!
 * Constructs a CreateHarvestJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHarvestJobResponse::CreateHarvestJobResponse(
        const CreateHarvestJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new CreateHarvestJobResponsePrivate(this), parent)
{
    setRequest(new CreateHarvestJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHarvestJobRequest * CreateHarvestJobResponse::request() const
{
    Q_D(const CreateHarvestJobResponse);
    return static_cast<const CreateHarvestJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage CreateHarvestJob \a response.
 */
void CreateHarvestJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHarvestJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobResponsePrivate
 * \brief The CreateHarvestJobResponsePrivate class provides private implementation for CreateHarvestJobResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateHarvestJobResponsePrivate object with public implementation \a q.
 */
CreateHarvestJobResponsePrivate::CreateHarvestJobResponsePrivate(
    CreateHarvestJobResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage CreateHarvestJob response element from \a xml.
 */
void CreateHarvestJobResponsePrivate::parseCreateHarvestJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHarvestJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws

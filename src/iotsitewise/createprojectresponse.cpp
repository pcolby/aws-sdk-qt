// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprojectresponse.h"
#include "createprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::CreateProjectResponse
 * \brief The CreateProjectResponse class provides an interace for IoTSiteWise CreateProject responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::createProject
 */

/*!
 * Constructs a CreateProjectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProjectResponse::CreateProjectResponse(
        const CreateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new CreateProjectResponsePrivate(this), parent)
{
    setRequest(new CreateProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProjectRequest * CreateProjectResponse::request() const
{
    Q_D(const CreateProjectResponse);
    return static_cast<const CreateProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise CreateProject \a response.
 */
void CreateProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::CreateProjectResponsePrivate
 * \brief The CreateProjectResponsePrivate class provides private implementation for CreateProjectResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a CreateProjectResponsePrivate object with public implementation \a q.
 */
CreateProjectResponsePrivate::CreateProjectResponsePrivate(
    CreateProjectResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise CreateProject response element from \a xml.
 */
void CreateProjectResponsePrivate::parseCreateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws

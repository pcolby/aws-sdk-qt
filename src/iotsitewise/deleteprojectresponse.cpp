// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprojectresponse.h"
#include "deleteprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteProjectResponse
 * \brief The DeleteProjectResponse class provides an interace for IoTSiteWise DeleteProject responses.
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
 * \sa IoTSiteWiseClient::deleteProject
 */

/*!
 * Constructs a DeleteProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProjectResponse::DeleteProjectResponse(
        const DeleteProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DeleteProjectResponsePrivate(this), parent)
{
    setRequest(new DeleteProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProjectRequest * DeleteProjectResponse::request() const
{
    Q_D(const DeleteProjectResponse);
    return static_cast<const DeleteProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DeleteProject \a response.
 */
void DeleteProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DeleteProjectResponsePrivate
 * \brief The DeleteProjectResponsePrivate class provides private implementation for DeleteProjectResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteProjectResponsePrivate object with public implementation \a q.
 */
DeleteProjectResponsePrivate::DeleteProjectResponsePrivate(
    DeleteProjectResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DeleteProject response element from \a xml.
 */
void DeleteProjectResponsePrivate::parseDeleteProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws

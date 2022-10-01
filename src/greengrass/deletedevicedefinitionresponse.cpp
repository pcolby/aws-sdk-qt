// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevicedefinitionresponse.h"
#include "deletedevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteDeviceDefinitionResponse
 * \brief The DeleteDeviceDefinitionResponse class provides an interace for Greengrass DeleteDeviceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteDeviceDefinition
 */

/*!
 * Constructs a DeleteDeviceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceDefinitionResponse::DeleteDeviceDefinitionResponse(
        const DeleteDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceDefinitionRequest * DeleteDeviceDefinitionResponse::request() const
{
    Q_D(const DeleteDeviceDefinitionResponse);
    return static_cast<const DeleteDeviceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteDeviceDefinition \a response.
 */
void DeleteDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteDeviceDefinitionResponsePrivate
 * \brief The DeleteDeviceDefinitionResponsePrivate class provides private implementation for DeleteDeviceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteDeviceDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteDeviceDefinitionResponsePrivate::DeleteDeviceDefinitionResponsePrivate(
    DeleteDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteDeviceDefinition response element from \a xml.
 */
void DeleteDeviceDefinitionResponsePrivate::parseDeleteDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws

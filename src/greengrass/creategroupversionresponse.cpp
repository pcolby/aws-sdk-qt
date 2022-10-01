// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategroupversionresponse.h"
#include "creategroupversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateGroupVersionResponse
 * \brief The CreateGroupVersionResponse class provides an interace for Greengrass CreateGroupVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createGroupVersion
 */

/*!
 * Constructs a CreateGroupVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGroupVersionResponse::CreateGroupVersionResponse(
        const CreateGroupVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateGroupVersionResponsePrivate(this), parent)
{
    setRequest(new CreateGroupVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGroupVersionRequest * CreateGroupVersionResponse::request() const
{
    Q_D(const CreateGroupVersionResponse);
    return static_cast<const CreateGroupVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateGroupVersion \a response.
 */
void CreateGroupVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGroupVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateGroupVersionResponsePrivate
 * \brief The CreateGroupVersionResponsePrivate class provides private implementation for CreateGroupVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateGroupVersionResponsePrivate object with public implementation \a q.
 */
CreateGroupVersionResponsePrivate::CreateGroupVersionResponsePrivate(
    CreateGroupVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateGroupVersion response element from \a xml.
 */
void CreateGroupVersionResponsePrivate::parseCreateGroupVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws

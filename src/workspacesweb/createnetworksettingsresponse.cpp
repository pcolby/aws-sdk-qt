// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworksettingsresponse.h"
#include "createnetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateNetworkSettingsResponse
 * \brief The CreateNetworkSettingsResponse class provides an interace for WorkSpacesWeb CreateNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createNetworkSettings
 */

/*!
 * Constructs a CreateNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkSettingsResponse::CreateNetworkSettingsResponse(
        const CreateNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new CreateNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkSettingsRequest * CreateNetworkSettingsResponse::request() const
{
    Q_D(const CreateNetworkSettingsResponse);
    return static_cast<const CreateNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb CreateNetworkSettings \a response.
 */
void CreateNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateNetworkSettingsResponsePrivate
 * \brief The CreateNetworkSettingsResponsePrivate class provides private implementation for CreateNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateNetworkSettingsResponsePrivate object with public implementation \a q.
 */
CreateNetworkSettingsResponsePrivate::CreateNetworkSettingsResponsePrivate(
    CreateNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb CreateNetworkSettings response element from \a xml.
 */
void CreateNetworkSettingsResponsePrivate::parseCreateNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws

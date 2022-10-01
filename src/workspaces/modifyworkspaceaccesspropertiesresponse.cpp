// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyworkspaceaccesspropertiesresponse.h"
#include "modifyworkspaceaccesspropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceAccessPropertiesResponse
 * \brief The ModifyWorkspaceAccessPropertiesResponse class provides an interace for WorkSpaces ModifyWorkspaceAccessProperties responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for your
 *  users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to procure and deploy hardware or install complex
 *  software. You can quickly add or remove users as your needs change. Users can access their virtual desktops from
 *  multiple devices or web
 * 
 *  browsers>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the WorkSpaces
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Amazon WorkSpaces service, see <a href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces endpoints and
 *  quotas</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  You can also manage your WorkSpaces resources using the WorkSpaces console, Command Line Interface (CLI), and SDKs. For
 *  more information about administering WorkSpaces, see the <a
 *  href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon WorkSpaces Administration Guide</a>. For more
 *  information about using the Amazon WorkSpaces client application or web browser to access provisioned WorkSpaces, see
 *  the <a href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon WorkSpaces User Guide</a>. For more
 *  information about using the CLI to manage your WorkSpaces resources, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces section of the CLI
 *
 * \sa WorkSpacesClient::modifyWorkspaceAccessProperties
 */

/*!
 * Constructs a ModifyWorkspaceAccessPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyWorkspaceAccessPropertiesResponse::ModifyWorkspaceAccessPropertiesResponse(
        const ModifyWorkspaceAccessPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyWorkspaceAccessPropertiesResponsePrivate(this), parent)
{
    setRequest(new ModifyWorkspaceAccessPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyWorkspaceAccessPropertiesRequest * ModifyWorkspaceAccessPropertiesResponse::request() const
{
    Q_D(const ModifyWorkspaceAccessPropertiesResponse);
    return static_cast<const ModifyWorkspaceAccessPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyWorkspaceAccessProperties \a response.
 */
void ModifyWorkspaceAccessPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyWorkspaceAccessPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceAccessPropertiesResponsePrivate
 * \brief The ModifyWorkspaceAccessPropertiesResponsePrivate class provides private implementation for ModifyWorkspaceAccessPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceAccessPropertiesResponsePrivate object with public implementation \a q.
 */
ModifyWorkspaceAccessPropertiesResponsePrivate::ModifyWorkspaceAccessPropertiesResponsePrivate(
    ModifyWorkspaceAccessPropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyWorkspaceAccessProperties response element from \a xml.
 */
void ModifyWorkspaceAccessPropertiesResponsePrivate::parseModifyWorkspaceAccessPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyWorkspaceAccessPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspacesresponse.h"
#include "createworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesResponse
 * \brief The CreateWorkspacesResponse class provides an interace for WorkSpaces CreateWorkspaces responses.
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
 * \sa WorkSpacesClient::createWorkspaces
 */

/*!
 * Constructs a CreateWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspacesResponse::CreateWorkspacesResponse(
        const CreateWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new CreateWorkspacesResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspacesRequest * CreateWorkspacesResponse::request() const
{
    Q_D(const CreateWorkspacesResponse);
    return static_cast<const CreateWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces CreateWorkspaces \a response.
 */
void CreateWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesResponsePrivate
 * \brief The CreateWorkspacesResponsePrivate class provides private implementation for CreateWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateWorkspacesResponsePrivate object with public implementation \a q.
 */
CreateWorkspacesResponsePrivate::CreateWorkspacesResponsePrivate(
    CreateWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces CreateWorkspaces response element from \a xml.
 */
void CreateWorkspacesResponsePrivate::parseCreateWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws

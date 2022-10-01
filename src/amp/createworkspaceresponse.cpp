// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspaceresponse.h"
#include "createworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateWorkspaceResponse
 * \brief The CreateWorkspaceResponse class provides an interace for Amp CreateWorkspace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createWorkspace
 */

/*!
 * Constructs a CreateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspaceResponse::CreateWorkspaceResponse(
        const CreateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new CreateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspaceRequest * CreateWorkspaceResponse::request() const
{
    Q_D(const CreateWorkspaceResponse);
    return static_cast<const CreateWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp CreateWorkspace \a response.
 */
void CreateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::CreateWorkspaceResponsePrivate
 * \brief The CreateWorkspaceResponsePrivate class provides private implementation for CreateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateWorkspaceResponsePrivate object with public implementation \a q.
 */
CreateWorkspaceResponsePrivate::CreateWorkspaceResponsePrivate(
    CreateWorkspaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp CreateWorkspace response element from \a xml.
 */
void CreateWorkspaceResponsePrivate::parseCreateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws

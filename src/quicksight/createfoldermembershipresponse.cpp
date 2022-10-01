// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfoldermembershipresponse.h"
#include "createfoldermembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateFolderMembershipResponse
 * \brief The CreateFolderMembershipResponse class provides an interace for QuickSight CreateFolderMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createFolderMembership
 */

/*!
 * Constructs a CreateFolderMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFolderMembershipResponse::CreateFolderMembershipResponse(
        const CreateFolderMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateFolderMembershipResponsePrivate(this), parent)
{
    setRequest(new CreateFolderMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFolderMembershipRequest * CreateFolderMembershipResponse::request() const
{
    Q_D(const CreateFolderMembershipResponse);
    return static_cast<const CreateFolderMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateFolderMembership \a response.
 */
void CreateFolderMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFolderMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateFolderMembershipResponsePrivate
 * \brief The CreateFolderMembershipResponsePrivate class provides private implementation for CreateFolderMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateFolderMembershipResponsePrivate object with public implementation \a q.
 */
CreateFolderMembershipResponsePrivate::CreateFolderMembershipResponsePrivate(
    CreateFolderMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateFolderMembership response element from \a xml.
 */
void CreateFolderMembershipResponsePrivate::parseCreateFolderMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFolderMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfolderresponse.h"
#include "createfolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateFolderResponse
 * \brief The CreateFolderResponse class provides an interace for QuickSight CreateFolder responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createFolder
 */

/*!
 * Constructs a CreateFolderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFolderResponse::CreateFolderResponse(
        const CreateFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateFolderResponsePrivate(this), parent)
{
    setRequest(new CreateFolderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFolderRequest * CreateFolderResponse::request() const
{
    Q_D(const CreateFolderResponse);
    return static_cast<const CreateFolderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateFolder \a response.
 */
void CreateFolderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFolderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateFolderResponsePrivate
 * \brief The CreateFolderResponsePrivate class provides private implementation for CreateFolderResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateFolderResponsePrivate object with public implementation \a q.
 */
CreateFolderResponsePrivate::CreateFolderResponsePrivate(
    CreateFolderResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateFolder response element from \a xml.
 */
void CreateFolderResponsePrivate::parseCreateFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFolderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserbyprincipalidresponse.h"
#include "deleteuserbyprincipalidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteUserByPrincipalIdResponse
 * \brief The DeleteUserByPrincipalIdResponse class provides an interace for QuickSight DeleteUserByPrincipalId responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteUserByPrincipalId
 */

/*!
 * Constructs a DeleteUserByPrincipalIdResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserByPrincipalIdResponse::DeleteUserByPrincipalIdResponse(
        const DeleteUserByPrincipalIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteUserByPrincipalIdResponsePrivate(this), parent)
{
    setRequest(new DeleteUserByPrincipalIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserByPrincipalIdRequest * DeleteUserByPrincipalIdResponse::request() const
{
    Q_D(const DeleteUserByPrincipalIdResponse);
    return static_cast<const DeleteUserByPrincipalIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteUserByPrincipalId \a response.
 */
void DeleteUserByPrincipalIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserByPrincipalIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteUserByPrincipalIdResponsePrivate
 * \brief The DeleteUserByPrincipalIdResponsePrivate class provides private implementation for DeleteUserByPrincipalIdResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteUserByPrincipalIdResponsePrivate object with public implementation \a q.
 */
DeleteUserByPrincipalIdResponsePrivate::DeleteUserByPrincipalIdResponsePrivate(
    DeleteUserByPrincipalIdResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteUserByPrincipalId response element from \a xml.
 */
void DeleteUserByPrincipalIdResponsePrivate::parseDeleteUserByPrincipalIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserByPrincipalIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

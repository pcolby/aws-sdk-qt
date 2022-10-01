// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetemplatealiasresponse.h"
#include "deletetemplatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteTemplateAliasResponse
 * \brief The DeleteTemplateAliasResponse class provides an interace for QuickSight DeleteTemplateAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTemplateAlias
 */

/*!
 * Constructs a DeleteTemplateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTemplateAliasResponse::DeleteTemplateAliasResponse(
        const DeleteTemplateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteTemplateAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteTemplateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTemplateAliasRequest * DeleteTemplateAliasResponse::request() const
{
    Q_D(const DeleteTemplateAliasResponse);
    return static_cast<const DeleteTemplateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteTemplateAlias \a response.
 */
void DeleteTemplateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTemplateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteTemplateAliasResponsePrivate
 * \brief The DeleteTemplateAliasResponsePrivate class provides private implementation for DeleteTemplateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteTemplateAliasResponsePrivate object with public implementation \a q.
 */
DeleteTemplateAliasResponsePrivate::DeleteTemplateAliasResponsePrivate(
    DeleteTemplateAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteTemplateAlias response element from \a xml.
 */
void DeleteTemplateAliasResponsePrivate::parseDeleteTemplateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTemplateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

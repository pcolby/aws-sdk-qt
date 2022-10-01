// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnamespaceresponse.h"
#include "createnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateNamespaceResponse
 * \brief The CreateNamespaceResponse class provides an interace for QuickSight CreateNamespace responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createNamespace
 */

/*!
 * Constructs a CreateNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNamespaceResponse::CreateNamespaceResponse(
        const CreateNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreateNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNamespaceRequest * CreateNamespaceResponse::request() const
{
    Q_D(const CreateNamespaceResponse);
    return static_cast<const CreateNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateNamespace \a response.
 */
void CreateNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateNamespaceResponsePrivate
 * \brief The CreateNamespaceResponsePrivate class provides private implementation for CreateNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateNamespaceResponsePrivate object with public implementation \a q.
 */
CreateNamespaceResponsePrivate::CreateNamespaceResponsePrivate(
    CreateNamespaceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateNamespace response element from \a xml.
 */
void CreateNamespaceResponsePrivate::parseCreateNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

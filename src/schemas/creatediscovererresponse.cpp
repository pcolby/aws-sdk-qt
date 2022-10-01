// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatediscovererresponse.h"
#include "creatediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateDiscovererResponse
 * \brief The CreateDiscovererResponse class provides an interace for Schemas CreateDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createDiscoverer
 */

/*!
 * Constructs a CreateDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDiscovererResponse::CreateDiscovererResponse(
        const CreateDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new CreateDiscovererResponsePrivate(this), parent)
{
    setRequest(new CreateDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDiscovererRequest * CreateDiscovererResponse::request() const
{
    Q_D(const CreateDiscovererResponse);
    return static_cast<const CreateDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas CreateDiscoverer \a response.
 */
void CreateDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::CreateDiscovererResponsePrivate
 * \brief The CreateDiscovererResponsePrivate class provides private implementation for CreateDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateDiscovererResponsePrivate object with public implementation \a q.
 */
CreateDiscovererResponsePrivate::CreateDiscovererResponsePrivate(
    CreateDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas CreateDiscoverer response element from \a xml.
 */
void CreateDiscovererResponsePrivate::parseCreateDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws

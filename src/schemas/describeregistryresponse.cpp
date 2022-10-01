// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeregistryresponse.h"
#include "describeregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeRegistryResponse
 * \brief The DescribeRegistryResponse class provides an interace for Schemas DescribeRegistry responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeRegistry
 */

/*!
 * Constructs a DescribeRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRegistryResponse::DescribeRegistryResponse(
        const DescribeRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DescribeRegistryResponsePrivate(this), parent)
{
    setRequest(new DescribeRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRegistryRequest * DescribeRegistryResponse::request() const
{
    Q_D(const DescribeRegistryResponse);
    return static_cast<const DescribeRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DescribeRegistry \a response.
 */
void DescribeRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DescribeRegistryResponsePrivate
 * \brief The DescribeRegistryResponsePrivate class provides private implementation for DescribeRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeRegistryResponsePrivate object with public implementation \a q.
 */
DescribeRegistryResponsePrivate::DescribeRegistryResponsePrivate(
    DescribeRegistryResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DescribeRegistry response element from \a xml.
 */
void DescribeRegistryResponsePrivate::parseDescribeRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws

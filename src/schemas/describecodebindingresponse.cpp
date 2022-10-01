// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecodebindingresponse.h"
#include "describecodebindingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeCodeBindingResponse
 * \brief The DescribeCodeBindingResponse class provides an interace for Schemas DescribeCodeBinding responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeCodeBinding
 */

/*!
 * Constructs a DescribeCodeBindingResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCodeBindingResponse::DescribeCodeBindingResponse(
        const DescribeCodeBindingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DescribeCodeBindingResponsePrivate(this), parent)
{
    setRequest(new DescribeCodeBindingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCodeBindingRequest * DescribeCodeBindingResponse::request() const
{
    Q_D(const DescribeCodeBindingResponse);
    return static_cast<const DescribeCodeBindingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DescribeCodeBinding \a response.
 */
void DescribeCodeBindingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCodeBindingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DescribeCodeBindingResponsePrivate
 * \brief The DescribeCodeBindingResponsePrivate class provides private implementation for DescribeCodeBindingResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeCodeBindingResponsePrivate object with public implementation \a q.
 */
DescribeCodeBindingResponsePrivate::DescribeCodeBindingResponsePrivate(
    DescribeCodeBindingResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DescribeCodeBinding response element from \a xml.
 */
void DescribeCodeBindingResponsePrivate::parseDescribeCodeBindingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCodeBindingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws

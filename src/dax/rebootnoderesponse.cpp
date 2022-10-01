// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootnoderesponse.h"
#include "rebootnoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::RebootNodeResponse
 * \brief The RebootNodeResponse class provides an interace for Dax RebootNode responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::rebootNode
 */

/*!
 * Constructs a RebootNodeResponse object for \a reply to \a request, with parent \a parent.
 */
RebootNodeResponse::RebootNodeResponse(
        const RebootNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new RebootNodeResponsePrivate(this), parent)
{
    setRequest(new RebootNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootNodeRequest * RebootNodeResponse::request() const
{
    Q_D(const RebootNodeResponse);
    return static_cast<const RebootNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax RebootNode \a response.
 */
void RebootNodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::RebootNodeResponsePrivate
 * \brief The RebootNodeResponsePrivate class provides private implementation for RebootNodeResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a RebootNodeResponsePrivate object with public implementation \a q.
 */
RebootNodeResponsePrivate::RebootNodeResponsePrivate(
    RebootNodeResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax RebootNode response element from \a xml.
 */
void RebootNodeResponsePrivate::parseRebootNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootNodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws

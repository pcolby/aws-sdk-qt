// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubnetgroupresponse.h"
#include "updatesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UpdateSubnetGroupResponse
 * \brief The UpdateSubnetGroupResponse class provides an interace for Dax UpdateSubnetGroup responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateSubnetGroup
 */

/*!
 * Constructs a UpdateSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubnetGroupResponse::UpdateSubnetGroupResponse(
        const UpdateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new UpdateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSubnetGroupRequest * UpdateSubnetGroupResponse::request() const
{
    Q_D(const UpdateSubnetGroupResponse);
    return static_cast<const UpdateSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax UpdateSubnetGroup \a response.
 */
void UpdateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::UpdateSubnetGroupResponsePrivate
 * \brief The UpdateSubnetGroupResponsePrivate class provides private implementation for UpdateSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UpdateSubnetGroupResponsePrivate object with public implementation \a q.
 */
UpdateSubnetGroupResponsePrivate::UpdateSubnetGroupResponsePrivate(
    UpdateSubnetGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax UpdateSubnetGroup response element from \a xml.
 */
void UpdateSubnetGroupResponsePrivate::parseUpdateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsubnetgroupresponse.h"
#include "createsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::CreateSubnetGroupResponse
 * \brief The CreateSubnetGroupResponse class provides an interace for Dax CreateSubnetGroup responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createSubnetGroup
 */

/*!
 * Constructs a CreateSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubnetGroupResponse::CreateSubnetGroupResponse(
        const CreateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new CreateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubnetGroupRequest * CreateSubnetGroupResponse::request() const
{
    Q_D(const CreateSubnetGroupResponse);
    return static_cast<const CreateSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax CreateSubnetGroup \a response.
 */
void CreateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::CreateSubnetGroupResponsePrivate
 * \brief The CreateSubnetGroupResponsePrivate class provides private implementation for CreateSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a CreateSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateSubnetGroupResponsePrivate::CreateSubnetGroupResponsePrivate(
    CreateSubnetGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax CreateSubnetGroup response element from \a xml.
 */
void CreateSubnetGroupResponsePrivate::parseCreateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws

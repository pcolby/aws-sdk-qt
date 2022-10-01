// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteparametergroupresponse.h"
#include "deleteparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DeleteParameterGroupResponse
 * \brief The DeleteParameterGroupResponse class provides an interace for Dax DeleteParameterGroup responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::deleteParameterGroup
 */

/*!
 * Constructs a DeleteParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteParameterGroupResponse::DeleteParameterGroupResponse(
        const DeleteParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DeleteParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteParameterGroupRequest * DeleteParameterGroupResponse::request() const
{
    Q_D(const DeleteParameterGroupResponse);
    return static_cast<const DeleteParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DeleteParameterGroup \a response.
 */
void DeleteParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DeleteParameterGroupResponsePrivate
 * \brief The DeleteParameterGroupResponsePrivate class provides private implementation for DeleteParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DeleteParameterGroupResponsePrivate object with public implementation \a q.
 */
DeleteParameterGroupResponsePrivate::DeleteParameterGroupResponsePrivate(
    DeleteParameterGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DeleteParameterGroup response element from \a xml.
 */
void DeleteParameterGroupResponsePrivate::parseDeleteParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws

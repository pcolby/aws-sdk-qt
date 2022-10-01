// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateparametergroupresponse.h"
#include "updateparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UpdateParameterGroupResponse
 * \brief The UpdateParameterGroupResponse class provides an interace for Dax UpdateParameterGroup responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateParameterGroup
 */

/*!
 * Constructs a UpdateParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateParameterGroupResponse::UpdateParameterGroupResponse(
        const UpdateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new UpdateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateParameterGroupRequest * UpdateParameterGroupResponse::request() const
{
    Q_D(const UpdateParameterGroupResponse);
    return static_cast<const UpdateParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax UpdateParameterGroup \a response.
 */
void UpdateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::UpdateParameterGroupResponsePrivate
 * \brief The UpdateParameterGroupResponsePrivate class provides private implementation for UpdateParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UpdateParameterGroupResponsePrivate object with public implementation \a q.
 */
UpdateParameterGroupResponsePrivate::UpdateParameterGroupResponsePrivate(
    UpdateParameterGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax UpdateParameterGroup response element from \a xml.
 */
void UpdateParameterGroupResponsePrivate::parseUpdateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws

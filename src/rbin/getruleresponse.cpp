/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getruleresponse.h"
#include "getruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::GetRuleResponse
 * \brief The GetRuleResponse class provides an interace for Rbin GetRule responses.
 *
 * \inmodule QtAwsRbin
 *
 *  This is the <i>Recycle Bin API Reference</i>. This documentation provides descriptions and syntax for each of the
 *  actions and data types in Recycle
 * 
 *  Bin>
 * 
 *  Recycle Bin is a resource recovery feature that enables you to restore accidentally deleted snapshots and EBS-backed
 *  AMIs. When using Recycle Bin, if your resources are deleted, they are retained in the Recycle Bin for a time period that
 *  you
 * 
 *  specify>
 * 
 *  You can restore a resource from the Recycle Bin at any time before its retention period expires. After you restore a
 *  resource from the Recycle Bin, the resource is removed from the Recycle Bin, and you can then use it in the same way you
 *  use any other resource of that type in your account. If the retention period expires and the resource is not restored,
 *  the resource is permanently deleted from the Recycle Bin and is no longer available for recovery. For more information
 *  about Recycle Bin, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-recycle-bin.html"> Recycle
 *  Bin</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * \sa RbinClient::getRule
 */

/*!
 * Constructs a GetRuleResponse object for \a reply to \a request, with parent \a parent.
 */
GetRuleResponse::GetRuleResponse(
        const GetRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RbinResponse(new GetRuleResponsePrivate(this), parent)
{
    setRequest(new GetRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRuleRequest * GetRuleResponse::request() const
{
    Q_D(const GetRuleResponse);
    return static_cast<const GetRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rbin GetRule \a response.
 */
void GetRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rbin::GetRuleResponsePrivate
 * \brief The GetRuleResponsePrivate class provides private implementation for GetRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a GetRuleResponsePrivate object with public implementation \a q.
 */
GetRuleResponsePrivate::GetRuleResponsePrivate(
    GetRuleResponse * const q) : RbinResponsePrivate(q)
{

}

/*!
 * Parses a Rbin GetRule response element from \a xml.
 */
void GetRuleResponsePrivate::parseGetRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rbin
} // namespace QtAws

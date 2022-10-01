// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateruleresponse.h"
#include "updateruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::UpdateRuleResponse
 * \brief The UpdateRuleResponse class provides an interace for Rbin UpdateRule responses.
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
 * \sa RbinClient::updateRule
 */

/*!
 * Constructs a UpdateRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRuleResponse::UpdateRuleResponse(
        const UpdateRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RbinResponse(new UpdateRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRuleRequest * UpdateRuleResponse::request() const
{
    Q_D(const UpdateRuleResponse);
    return static_cast<const UpdateRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rbin UpdateRule \a response.
 */
void UpdateRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rbin::UpdateRuleResponsePrivate
 * \brief The UpdateRuleResponsePrivate class provides private implementation for UpdateRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a UpdateRuleResponsePrivate object with public implementation \a q.
 */
UpdateRuleResponsePrivate::UpdateRuleResponsePrivate(
    UpdateRuleResponse * const q) : RbinResponsePrivate(q)
{

}

/*!
 * Parses a Rbin UpdateRule response element from \a xml.
 */
void UpdateRuleResponsePrivate::parseUpdateRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rbin
} // namespace QtAws

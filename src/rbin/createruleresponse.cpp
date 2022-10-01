// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createruleresponse.h"
#include "createruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::CreateRuleResponse
 * \brief The CreateRuleResponse class provides an interace for Rbin CreateRule responses.
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
 * \sa RbinClient::createRule
 */

/*!
 * Constructs a CreateRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRuleResponse::CreateRuleResponse(
        const CreateRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RbinResponse(new CreateRuleResponsePrivate(this), parent)
{
    setRequest(new CreateRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRuleRequest * CreateRuleResponse::request() const
{
    Q_D(const CreateRuleResponse);
    return static_cast<const CreateRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rbin CreateRule \a response.
 */
void CreateRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rbin::CreateRuleResponsePrivate
 * \brief The CreateRuleResponsePrivate class provides private implementation for CreateRuleResponse.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a CreateRuleResponsePrivate object with public implementation \a q.
 */
CreateRuleResponsePrivate::CreateRuleResponsePrivate(
    CreateRuleResponse * const q) : RbinResponsePrivate(q)
{

}

/*!
 * Parses a Rbin CreateRule response element from \a xml.
 */
void CreateRuleResponsePrivate::parseCreateRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rbin
} // namespace QtAws

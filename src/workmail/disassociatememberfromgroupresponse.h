// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERFROMGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEMEMBERFROMGROUPRESPONSE_H

#include "workmailresponse.h"
#include "disassociatememberfromgrouprequest.h"

namespace QtAws {
namespace WorkMail {

class DisassociateMemberFromGroupResponsePrivate;

class QTAWSWORKMAIL_EXPORT DisassociateMemberFromGroupResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DisassociateMemberFromGroupResponse(const DisassociateMemberFromGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMemberFromGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMemberFromGroupResponse)
    Q_DISABLE_COPY(DisassociateMemberFromGroupResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

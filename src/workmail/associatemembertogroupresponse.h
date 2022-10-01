// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERTOGROUPRESPONSE_H
#define QTAWS_ASSOCIATEMEMBERTOGROUPRESPONSE_H

#include "workmailresponse.h"
#include "associatemembertogrouprequest.h"

namespace QtAws {
namespace WorkMail {

class AssociateMemberToGroupResponsePrivate;

class QTAWSWORKMAIL_EXPORT AssociateMemberToGroupResponse : public WorkMailResponse {
    Q_OBJECT

public:
    AssociateMemberToGroupResponse(const AssociateMemberToGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateMemberToGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMemberToGroupResponse)
    Q_DISABLE_COPY(AssociateMemberToGroupResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

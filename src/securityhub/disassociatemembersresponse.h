// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSRESPONSE_H
#define QTAWS_DISASSOCIATEMEMBERSRESPONSE_H

#include "securityhubresponse.h"
#include "disassociatemembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisassociateMembersResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DisassociateMembersResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DisassociateMembersResponse(const DisassociateMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMembersResponse)
    Q_DISABLE_COPY(DisassociateMembersResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

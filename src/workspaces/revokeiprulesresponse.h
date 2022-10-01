// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEIPRULESRESPONSE_H
#define QTAWS_REVOKEIPRULESRESPONSE_H

#include "workspacesresponse.h"
#include "revokeiprulesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RevokeIpRulesResponsePrivate;

class QTAWSWORKSPACES_EXPORT RevokeIpRulesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    RevokeIpRulesResponse(const RevokeIpRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeIpRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeIpRulesResponse)
    Q_DISABLE_COPY(RevokeIpRulesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

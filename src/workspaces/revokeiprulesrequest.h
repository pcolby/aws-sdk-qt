// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEIPRULESREQUEST_H
#define QTAWS_REVOKEIPRULESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RevokeIpRulesRequestPrivate;

class QTAWSWORKSPACES_EXPORT RevokeIpRulesRequest : public WorkSpacesRequest {

public:
    RevokeIpRulesRequest(const RevokeIpRulesRequest &other);
    RevokeIpRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeIpRulesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

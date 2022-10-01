// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTARGETREQUEST_H
#define QTAWS_UPDATEACTIONTARGETREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateActionTargetRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateActionTargetRequest : public SecurityHubRequest {

public:
    UpdateActionTargetRequest(const UpdateActionTargetRequest &other);
    UpdateActionTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateActionTargetRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

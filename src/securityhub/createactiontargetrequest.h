// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONTARGETREQUEST_H
#define QTAWS_CREATEACTIONTARGETREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateActionTargetRequestPrivate;

class QTAWSSECURITYHUB_EXPORT CreateActionTargetRequest : public SecurityHubRequest {

public:
    CreateActionTargetRequest(const CreateActionTargetRequest &other);
    CreateActionTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActionTargetRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

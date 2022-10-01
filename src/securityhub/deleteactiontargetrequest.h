// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONTARGETREQUEST_H
#define QTAWS_DELETEACTIONTARGETREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteActionTargetRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DeleteActionTargetRequest : public SecurityHubRequest {

public:
    DeleteActionTargetRequest(const DeleteActionTargetRequest &other);
    DeleteActionTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActionTargetRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

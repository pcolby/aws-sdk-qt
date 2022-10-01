// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDCONFIGREQUEST_H
#define QTAWS_UPDATEBACKENDCONFIGREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendConfigRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendConfigRequest : public AmplifyBackendRequest {

public:
    UpdateBackendConfigRequest(const UpdateBackendConfigRequest &other);
    UpdateBackendConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendConfigRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

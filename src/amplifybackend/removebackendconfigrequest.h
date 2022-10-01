// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEBACKENDCONFIGREQUEST_H
#define QTAWS_REMOVEBACKENDCONFIGREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveBackendConfigRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT RemoveBackendConfigRequest : public AmplifyBackendRequest {

public:
    RemoveBackendConfigRequest(const RemoveBackendConfigRequest &other);
    RemoveBackendConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveBackendConfigRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

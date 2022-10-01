// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONEBACKENDREQUEST_H
#define QTAWS_CLONEBACKENDREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CloneBackendRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CloneBackendRequest : public AmplifyBackendRequest {

public:
    CloneBackendRequest(const CloneBackendRequest &other);
    CloneBackendRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloneBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

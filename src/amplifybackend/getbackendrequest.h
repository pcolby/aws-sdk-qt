// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDREQUEST_H
#define QTAWS_GETBACKENDREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendRequest : public AmplifyBackendRequest {

public:
    GetBackendRequest(const GetBackendRequest &other);
    GetBackendRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

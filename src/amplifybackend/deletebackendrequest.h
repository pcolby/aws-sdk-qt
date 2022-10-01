// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDREQUEST_H
#define QTAWS_DELETEBACKENDREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendRequest : public AmplifyBackendRequest {

public:
    DeleteBackendRequest(const DeleteBackendRequest &other);
    DeleteBackendRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

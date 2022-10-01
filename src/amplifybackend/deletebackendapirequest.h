// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAPIREQUEST_H
#define QTAWS_DELETEBACKENDAPIREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAPIRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendAPIRequest : public AmplifyBackendRequest {

public:
    DeleteBackendAPIRequest(const DeleteBackendAPIRequest &other);
    DeleteBackendAPIRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

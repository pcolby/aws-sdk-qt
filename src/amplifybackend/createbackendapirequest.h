// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAPIREQUEST_H
#define QTAWS_CREATEBACKENDAPIREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAPIRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendAPIRequest : public AmplifyBackendRequest {

public:
    CreateBackendAPIRequest(const CreateBackendAPIRequest &other);
    CreateBackendAPIRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAPIREQUEST_H
#define QTAWS_UPDATEBACKENDAPIREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAPIRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendAPIRequest : public AmplifyBackendRequest {

public:
    UpdateBackendAPIRequest(const UpdateBackendAPIRequest &other);
    UpdateBackendAPIRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

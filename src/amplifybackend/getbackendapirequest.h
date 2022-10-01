// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIREQUEST_H
#define QTAWS_GETBACKENDAPIREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendAPIRequest : public AmplifyBackendRequest {

public:
    GetBackendAPIRequest(const GetBackendAPIRequest &other);
    GetBackendAPIRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

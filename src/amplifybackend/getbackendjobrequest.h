// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDJOBREQUEST_H
#define QTAWS_GETBACKENDJOBREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendJobRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendJobRequest : public AmplifyBackendRequest {

public:
    GetBackendJobRequest(const GetBackendJobRequest &other);
    GetBackendJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendJobRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDJOBREQUEST_H
#define QTAWS_UPDATEBACKENDJOBREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendJobRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendJobRequest : public AmplifyBackendRequest {

public:
    UpdateBackendJobRequest(const UpdateBackendJobRequest &other);
    UpdateBackendJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendJobRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

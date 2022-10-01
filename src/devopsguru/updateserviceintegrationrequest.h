// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINTEGRATIONREQUEST_H
#define QTAWS_UPDATESERVICEINTEGRATIONREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateServiceIntegrationRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateServiceIntegrationRequest : public DevOpsGuruRequest {

public:
    UpdateServiceIntegrationRequest(const UpdateServiceIntegrationRequest &other);
    UpdateServiceIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceIntegrationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

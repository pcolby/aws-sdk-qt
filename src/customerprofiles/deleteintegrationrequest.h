// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONREQUEST_H
#define QTAWS_DELETEINTEGRATIONREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteIntegrationRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteIntegrationRequest : public CustomerProfilesRequest {

public:
    DeleteIntegrationRequest(const DeleteIntegrationRequest &other);
    DeleteIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

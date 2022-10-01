// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONREQUEST_H
#define QTAWS_GETINTEGRATIONREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetIntegrationRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetIntegrationRequest : public CustomerProfilesRequest {

public:
    GetIntegrationRequest(const GetIntegrationRequest &other);
    GetIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

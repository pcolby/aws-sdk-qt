// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTINTEGRATIONSREQUEST_H
#define QTAWS_LISTACCOUNTINTEGRATIONSREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListAccountIntegrationsRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListAccountIntegrationsRequest : public CustomerProfilesRequest {

public:
    ListAccountIntegrationsRequest(const ListAccountIntegrationsRequest &other);
    ListAccountIntegrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountIntegrationsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

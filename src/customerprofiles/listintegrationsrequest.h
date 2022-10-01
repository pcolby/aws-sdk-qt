// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONSREQUEST_H
#define QTAWS_LISTINTEGRATIONSREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIntegrationsRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListIntegrationsRequest : public CustomerProfilesRequest {

public:
    ListIntegrationsRequest(const ListIntegrationsRequest &other);
    ListIntegrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIntegrationsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

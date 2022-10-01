// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSREQUEST_H
#define QTAWS_LISTCONFIGURATIONSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListConfigurationsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ListConfigurationsRequest : public ApplicationDiscoveryRequest {

public:
    ListConfigurationsRequest(const ListConfigurationsRequest &other);
    ListConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

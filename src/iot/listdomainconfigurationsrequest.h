// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINCONFIGURATIONSREQUEST_H
#define QTAWS_LISTDOMAINCONFIGURATIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListDomainConfigurationsRequestPrivate;

class QTAWSIOT_EXPORT ListDomainConfigurationsRequest : public IoTRequest {

public:
    ListDomainConfigurationsRequest(const ListDomainConfigurationsRequest &other);
    ListDomainConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainConfigurationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

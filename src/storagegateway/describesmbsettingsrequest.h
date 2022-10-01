// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBSETTINGSREQUEST_H
#define QTAWS_DESCRIBESMBSETTINGSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBSettingsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeSMBSettingsRequest : public StorageGatewayRequest {

public:
    DescribeSMBSettingsRequest(const DescribeSMBSettingsRequest &other);
    DescribeSMBSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSMBSettingsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATESREQUEST_H
#define QTAWS_LISTPROVISIONINGTEMPLATESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplatesRequestPrivate;

class QTAWSIOT_EXPORT ListProvisioningTemplatesRequest : public IoTRequest {

public:
    ListProvisioningTemplatesRequest(const ListProvisioningTemplatesRequest &other);
    ListProvisioningTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningTemplatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

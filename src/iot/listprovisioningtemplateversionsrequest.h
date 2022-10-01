// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATEVERSIONSREQUEST_H
#define QTAWS_LISTPROVISIONINGTEMPLATEVERSIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplateVersionsRequestPrivate;

class QTAWSIOT_EXPORT ListProvisioningTemplateVersionsRequest : public IoTRequest {

public:
    ListProvisioningTemplateVersionsRequest(const ListProvisioningTemplateVersionsRequest &other);
    ListProvisioningTemplateVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningTemplateVersionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

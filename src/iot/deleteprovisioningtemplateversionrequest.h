// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATEVERSIONREQUEST_H
#define QTAWS_DELETEPROVISIONINGTEMPLATEVERSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateVersionRequestPrivate;

class QTAWSIOT_EXPORT DeleteProvisioningTemplateVersionRequest : public IoTRequest {

public:
    DeleteProvisioningTemplateVersionRequest(const DeleteProvisioningTemplateVersionRequest &other);
    DeleteProvisioningTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisioningTemplateVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

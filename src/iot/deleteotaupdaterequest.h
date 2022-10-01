// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOTAUPDATEREQUEST_H
#define QTAWS_DELETEOTAUPDATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteOTAUpdateRequestPrivate;

class QTAWSIOT_EXPORT DeleteOTAUpdateRequest : public IoTRequest {

public:
    DeleteOTAUpdateRequest(const DeleteOTAUpdateRequest &other);
    DeleteOTAUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOTAUpdateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

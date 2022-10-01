// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGREQUEST_H
#define QTAWS_DELETETHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingRequestPrivate;

class QTAWSIOT_EXPORT DeleteThingRequest : public IoTRequest {

public:
    DeleteThingRequest(const DeleteThingRequest &other);
    DeleteThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

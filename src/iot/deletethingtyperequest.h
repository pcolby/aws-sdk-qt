// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGTYPEREQUEST_H
#define QTAWS_DELETETHINGTYPEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingTypeRequestPrivate;

class QTAWSIOT_EXPORT DeleteThingTypeRequest : public IoTRequest {

public:
    DeleteThingTypeRequest(const DeleteThingTypeRequest &other);
    DeleteThingTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

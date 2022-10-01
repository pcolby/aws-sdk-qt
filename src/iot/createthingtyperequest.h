// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGTYPEREQUEST_H
#define QTAWS_CREATETHINGTYPEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateThingTypeRequestPrivate;

class QTAWSIOT_EXPORT CreateThingTypeRequest : public IoTRequest {

public:
    CreateThingTypeRequest(const CreateThingTypeRequest &other);
    CreateThingTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

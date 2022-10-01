// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUEREQUEST_H
#define QTAWS_GETPROPERTYVALUEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT GetPropertyValueRequest : public IoTTwinMakerRequest {

public:
    GetPropertyValueRequest(const GetPropertyValueRequest &other);
    GetPropertyValueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPropertyValueRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

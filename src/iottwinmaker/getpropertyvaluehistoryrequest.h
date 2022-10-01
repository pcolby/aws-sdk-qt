// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUEHISTORYREQUEST_H
#define QTAWS_GETPROPERTYVALUEHISTORYREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueHistoryRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT GetPropertyValueHistoryRequest : public IoTTwinMakerRequest {

public:
    GetPropertyValueHistoryRequest(const GetPropertyValueHistoryRequest &other);
    GetPropertyValueHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPropertyValueHistoryRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

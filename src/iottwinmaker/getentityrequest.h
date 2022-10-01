// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYREQUEST_H
#define QTAWS_GETENTITYREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetEntityRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT GetEntityRequest : public IoTTwinMakerRequest {

public:
    GetEntityRequest(const GetEntityRequest &other);
    GetEntityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

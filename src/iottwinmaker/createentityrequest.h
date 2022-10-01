// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYREQUEST_H
#define QTAWS_CREATEENTITYREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateEntityRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT CreateEntityRequest : public IoTTwinMakerRequest {

public:
    CreateEntityRequest(const CreateEntityRequest &other);
    CreateEntityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

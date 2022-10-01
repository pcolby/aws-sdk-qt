// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCENEREQUEST_H
#define QTAWS_CREATESCENEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateSceneRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT CreateSceneRequest : public IoTTwinMakerRequest {

public:
    CreateSceneRequest(const CreateSceneRequest &other);
    CreateSceneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

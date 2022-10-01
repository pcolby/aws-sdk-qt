// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCENEREQUEST_H
#define QTAWS_UPDATESCENEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateSceneRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT UpdateSceneRequest : public IoTTwinMakerRequest {

public:
    UpdateSceneRequest(const UpdateSceneRequest &other);
    UpdateSceneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

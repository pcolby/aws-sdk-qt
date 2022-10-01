// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCENEREQUEST_H
#define QTAWS_GETSCENEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetSceneRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT GetSceneRequest : public IoTTwinMakerRequest {

public:
    GetSceneRequest(const GetSceneRequest &other);
    GetSceneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

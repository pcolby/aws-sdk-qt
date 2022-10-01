// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCENEREQUEST_H
#define QTAWS_DELETESCENEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteSceneRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteSceneRequest : public IoTTwinMakerRequest {

public:
    DeleteSceneRequest(const DeleteSceneRequest &other);
    DeleteSceneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

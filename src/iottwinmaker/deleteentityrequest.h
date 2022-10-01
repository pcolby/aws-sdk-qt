// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYREQUEST_H
#define QTAWS_DELETEENTITYREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteEntityRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteEntityRequest : public IoTTwinMakerRequest {

public:
    DeleteEntityRequest(const DeleteEntityRequest &other);
    DeleteEntityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

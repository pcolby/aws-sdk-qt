// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTTYPEREQUEST_H
#define QTAWS_UPDATECOMPONENTTYPEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateComponentTypeRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT UpdateComponentTypeRequest : public IoTTwinMakerRequest {

public:
    UpdateComponentTypeRequest(const UpdateComponentTypeRequest &other);
    UpdateComponentTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

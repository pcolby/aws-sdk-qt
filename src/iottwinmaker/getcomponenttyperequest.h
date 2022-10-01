// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTTYPEREQUEST_H
#define QTAWS_GETCOMPONENTTYPEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetComponentTypeRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT GetComponentTypeRequest : public IoTTwinMakerRequest {

public:
    GetComponentTypeRequest(const GetComponentTypeRequest &other);
    GetComponentTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

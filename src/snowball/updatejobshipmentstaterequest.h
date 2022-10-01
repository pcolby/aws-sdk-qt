// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSHIPMENTSTATEREQUEST_H
#define QTAWS_UPDATEJOBSHIPMENTSTATEREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateJobShipmentStateRequestPrivate;

class QTAWSSNOWBALL_EXPORT UpdateJobShipmentStateRequest : public SnowballRequest {

public:
    UpdateJobShipmentStateRequest(const UpdateJobShipmentStateRequest &other);
    UpdateJobShipmentStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobShipmentStateRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif

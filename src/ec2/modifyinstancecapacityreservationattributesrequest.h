// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESREQUEST_H
#define QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCapacityReservationAttributesRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstanceCapacityReservationAttributesRequest : public Ec2Request {

public:
    ModifyInstanceCapacityReservationAttributesRequest(const ModifyInstanceCapacityReservationAttributesRequest &other);
    ModifyInstanceCapacityReservationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceCapacityReservationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORATTRIBUTESREQUEST_H
#define QTAWS_UPDATEACCELERATORATTRIBUTESREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorAttributesRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateAcceleratorAttributesRequest : public GlobalAcceleratorRequest {

public:
    UpdateAcceleratorAttributesRequest(const UpdateAcceleratorAttributesRequest &other);
    UpdateAcceleratorAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

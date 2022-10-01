// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORREQUEST_H
#define QTAWS_UPDATEACCELERATORREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateAcceleratorRequest : public GlobalAcceleratorRequest {

public:
    UpdateAcceleratorRequest(const UpdateAcceleratorRequest &other);
    UpdateAcceleratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

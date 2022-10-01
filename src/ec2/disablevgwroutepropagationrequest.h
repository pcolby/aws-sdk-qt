// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVGWROUTEPROPAGATIONREQUEST_H
#define QTAWS_DISABLEVGWROUTEPROPAGATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableVgwRoutePropagationRequestPrivate;

class QTAWSEC2_EXPORT DisableVgwRoutePropagationRequest : public Ec2Request {

public:
    DisableVgwRoutePropagationRequest(const DisableVgwRoutePropagationRequest &other);
    DisableVgwRoutePropagationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableVgwRoutePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

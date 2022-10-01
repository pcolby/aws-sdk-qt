// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMAGEDEPRECATIONREQUEST_H
#define QTAWS_DISABLEIMAGEDEPRECATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableImageDeprecationRequestPrivate;

class QTAWSEC2_EXPORT DisableImageDeprecationRequest : public Ec2Request {

public:
    DisableImageDeprecationRequest(const DisableImageDeprecationRequest &other);
    DisableImageDeprecationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableImageDeprecationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

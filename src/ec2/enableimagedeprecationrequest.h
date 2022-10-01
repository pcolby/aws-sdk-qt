// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMAGEDEPRECATIONREQUEST_H
#define QTAWS_ENABLEIMAGEDEPRECATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableImageDeprecationRequestPrivate;

class QTAWSEC2_EXPORT EnableImageDeprecationRequest : public Ec2Request {

public:
    EnableImageDeprecationRequest(const EnableImageDeprecationRequest &other);
    EnableImageDeprecationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableImageDeprecationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

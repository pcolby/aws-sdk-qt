// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTLAUNCHREQUEST_H
#define QTAWS_ENABLEFASTLAUNCHREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableFastLaunchRequestPrivate;

class QTAWSEC2_EXPORT EnableFastLaunchRequest : public Ec2Request {

public:
    EnableFastLaunchRequest(const EnableFastLaunchRequest &other);
    EnableFastLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableFastLaunchRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

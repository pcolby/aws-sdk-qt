// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTLAUNCHREQUEST_H
#define QTAWS_DISABLEFASTLAUNCHREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableFastLaunchRequestPrivate;

class QTAWSEC2_EXPORT DisableFastLaunchRequest : public Ec2Request {

public:
    DisableFastLaunchRequest(const DisableFastLaunchRequest &other);
    DisableFastLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableFastLaunchRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKREQUEST_H
#define QTAWS_DISABLEVPCCLASSICLINKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkRequestPrivate;

class QTAWSEC2_EXPORT DisableVpcClassicLinkRequest : public Ec2Request {

public:
    DisableVpcClassicLinkRequest(const DisableVpcClassicLinkRequest &other);
    DisableVpcClassicLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableVpcClassicLinkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

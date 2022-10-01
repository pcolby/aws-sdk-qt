// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKREQUEST_H
#define QTAWS_ENABLEVPCCLASSICLINKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkRequestPrivate;

class QTAWSEC2_EXPORT EnableVpcClassicLinkRequest : public Ec2Request {

public:
    EnableVpcClassicLinkRequest(const EnableVpcClassicLinkRequest &other);
    EnableVpcClassicLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVpcClassicLinkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

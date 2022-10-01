// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGEATTRIBUTEREQUEST_H
#define QTAWS_DESCRIBEFPGAIMAGEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImageAttributeRequestPrivate;

class QTAWSEC2_EXPORT DescribeFpgaImageAttributeRequest : public Ec2Request {

public:
    DescribeFpgaImageAttributeRequest(const DescribeFpgaImageAttributeRequest &other);
    DescribeFpgaImageAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFpgaImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

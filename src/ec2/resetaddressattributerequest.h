// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETADDRESSATTRIBUTEREQUEST_H
#define QTAWS_RESETADDRESSATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetAddressAttributeRequestPrivate;

class QTAWSEC2_EXPORT ResetAddressAttributeRequest : public Ec2Request {

public:
    ResetAddressAttributeRequest(const ResetAddressAttributeRequest &other);
    ResetAddressAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetAddressAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

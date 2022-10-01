// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETINSTANCEATTRIBUTEREQUEST_H
#define QTAWS_RESETINSTANCEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetInstanceAttributeRequestPrivate;

class QTAWSEC2_EXPORT ResetInstanceAttributeRequest : public Ec2Request {

public:
    ResetInstanceAttributeRequest(const ResetInstanceAttributeRequest &other);
    ResetInstanceAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetInstanceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

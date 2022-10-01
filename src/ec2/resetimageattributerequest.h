// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETIMAGEATTRIBUTEREQUEST_H
#define QTAWS_RESETIMAGEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetImageAttributeRequestPrivate;

class QTAWSEC2_EXPORT ResetImageAttributeRequest : public Ec2Request {

public:
    ResetImageAttributeRequest(const ResetImageAttributeRequest &other);
    ResetImageAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

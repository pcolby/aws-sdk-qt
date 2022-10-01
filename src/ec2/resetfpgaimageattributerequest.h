// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETFPGAIMAGEATTRIBUTEREQUEST_H
#define QTAWS_RESETFPGAIMAGEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetFpgaImageAttributeRequestPrivate;

class QTAWSEC2_EXPORT ResetFpgaImageAttributeRequest : public Ec2Request {

public:
    ResetFpgaImageAttributeRequest(const ResetFpgaImageAttributeRequest &other);
    ResetFpgaImageAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetFpgaImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

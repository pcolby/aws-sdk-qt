// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIMAGEREQUEST_H
#define QTAWS_REGISTERIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RegisterImageRequestPrivate;

class QTAWSEC2_EXPORT RegisterImageRequest : public Ec2Request {

public:
    RegisterImageRequest(const RegisterImageRequest &other);
    RegisterImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

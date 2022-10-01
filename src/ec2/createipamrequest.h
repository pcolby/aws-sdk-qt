// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMREQUEST_H
#define QTAWS_CREATEIPAMREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamRequestPrivate;

class QTAWSEC2_EXPORT CreateIpamRequest : public Ec2Request {

public:
    CreateIpamRequest(const CreateIpamRequest &other);
    CreateIpamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

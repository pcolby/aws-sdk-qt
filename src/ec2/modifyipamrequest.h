// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMREQUEST_H
#define QTAWS_MODIFYIPAMREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamRequestPrivate;

class QTAWSEC2_EXPORT ModifyIpamRequest : public Ec2Request {

public:
    ModifyIpamRequest(const ModifyIpamRequest &other);
    ModifyIpamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

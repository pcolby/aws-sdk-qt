// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREADDRESSTOCLASSICREQUEST_H
#define QTAWS_RESTOREADDRESSTOCLASSICREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RestoreAddressToClassicRequestPrivate;

class QTAWSEC2_EXPORT RestoreAddressToClassicRequest : public Ec2Request {

public:
    RestoreAddressToClassicRequest(const RestoreAddressToClassicRequest &other);
    RestoreAddressToClassicRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreAddressToClassicRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

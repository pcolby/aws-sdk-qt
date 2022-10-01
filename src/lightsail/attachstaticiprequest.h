// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSTATICIPREQUEST_H
#define QTAWS_ATTACHSTATICIPREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachStaticIpRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT AttachStaticIpRequest : public LightsailRequest {

public:
    AttachStaticIpRequest(const AttachStaticIpRequest &other);
    AttachStaticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

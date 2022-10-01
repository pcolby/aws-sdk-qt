// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPREQUEST_H
#define QTAWS_GETSTATICIPREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetStaticIpRequest : public LightsailRequest {

public:
    GetStaticIpRequest(const GetStaticIpRequest &other);
    GetStaticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

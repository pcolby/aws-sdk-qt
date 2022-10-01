// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPSREQUEST_H
#define QTAWS_GETSTATICIPSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetStaticIpsRequest : public LightsailRequest {

public:
    GetStaticIpsRequest(const GetStaticIpsRequest &other);
    GetStaticIpsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStaticIpsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

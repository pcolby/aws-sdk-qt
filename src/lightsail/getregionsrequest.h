// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGIONSREQUEST_H
#define QTAWS_GETREGIONSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRegionsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRegionsRequest : public LightsailRequest {

public:
    GetRegionsRequest(const GetRegionsRequest &other);
    GetRegionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegionsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESREQUEST_H
#define QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class GetPlatformApplicationAttributesRequestPrivate;

class QTAWSSNS_EXPORT GetPlatformApplicationAttributesRequest : public SnsRequest {

public:
    GetPlatformApplicationAttributesRequest(const GetPlatformApplicationAttributesRequest &other);
    GetPlatformApplicationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlatformApplicationAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

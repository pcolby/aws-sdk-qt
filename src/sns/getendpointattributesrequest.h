// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTATTRIBUTESREQUEST_H
#define QTAWS_GETENDPOINTATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class GetEndpointAttributesRequestPrivate;

class QTAWSSNS_EXPORT GetEndpointAttributesRequest : public SnsRequest {

public:
    GetEndpointAttributesRequest(const GetEndpointAttributesRequest &other);
    GetEndpointAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

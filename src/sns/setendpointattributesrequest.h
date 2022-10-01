// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETENDPOINTATTRIBUTESREQUEST_H
#define QTAWS_SETENDPOINTATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SetEndpointAttributesRequestPrivate;

class QTAWSSNS_EXPORT SetEndpointAttributesRequest : public SnsRequest {

public:
    SetEndpointAttributesRequest(const SetEndpointAttributesRequest &other);
    SetEndpointAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetEndpointAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

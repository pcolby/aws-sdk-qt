// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLFORRESOURCEREQUEST_H
#define QTAWS_GETWEBACLFORRESOURCEREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetWebACLForResourceRequestPrivate;

class QTAWSWAFV2_EXPORT GetWebACLForResourceRequest : public Wafv2Request {

public:
    GetWebACLForResourceRequest(const GetWebACLForResourceRequest &other);
    GetWebACLForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebACLForResourceRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

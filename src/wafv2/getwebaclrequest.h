// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLREQUEST_H
#define QTAWS_GETWEBACLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetWebACLRequestPrivate;

class QTAWSWAFV2_EXPORT GetWebACLRequest : public Wafv2Request {

public:
    GetWebACLRequest(const GetWebACLRequest &other);
    GetWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSREQUEST_H
#define QTAWS_GETSAMPLEDREQUESTSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetSampledRequestsRequestPrivate;

class QTAWSWAFV2_EXPORT GetSampledRequestsRequest : public Wafv2Request {

public:
    GetSampledRequestsRequest(const GetSampledRequestsRequest &other);
    GetSampledRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSampledRequestsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

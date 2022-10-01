// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSREQUEST_H
#define QTAWS_GETSAMPLEDREQUESTSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetSampledRequestsRequestPrivate;

class QTAWSWAF_EXPORT GetSampledRequestsRequest : public WafRequest {

public:
    GetSampledRequestsRequest(const GetSampledRequestsRequest &other);
    GetSampledRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSampledRequestsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

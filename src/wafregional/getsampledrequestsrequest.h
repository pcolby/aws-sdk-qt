// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSREQUEST_H
#define QTAWS_GETSAMPLEDREQUESTSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetSampledRequestsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetSampledRequestsRequest : public WafRegionalRequest {

public:
    GetSampledRequestsRequest(const GetSampledRequestsRequest &other);
    GetSampledRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSampledRequestsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

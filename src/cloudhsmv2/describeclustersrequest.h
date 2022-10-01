// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSREQUEST_H
#define QTAWS_DESCRIBECLUSTERSREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class DescribeClustersRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT DescribeClustersRequest : public CloudHsmV2Request {

public:
    DescribeClustersRequest(const DescribeClustersRequest &other);
    DescribeClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClustersRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

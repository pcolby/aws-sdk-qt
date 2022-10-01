// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELVERSIONSREQUEST_H
#define QTAWS_DESCRIBEMODELVERSIONSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DescribeModelVersionsRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DescribeModelVersionsRequest : public FraudDetectorRequest {

public:
    DescribeModelVersionsRequest(const DescribeModelVersionsRequest &other);
    DescribeModelVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelVersionsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

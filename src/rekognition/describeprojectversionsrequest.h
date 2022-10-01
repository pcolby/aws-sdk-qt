// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTVERSIONSREQUEST_H
#define QTAWS_DESCRIBEPROJECTVERSIONSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectVersionsRequestPrivate;

class QTAWSREKOGNITION_EXPORT DescribeProjectVersionsRequest : public RekognitionRequest {

public:
    DescribeProjectVersionsRequest(const DescribeProjectVersionsRequest &other);
    DescribeProjectVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectVersionsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif

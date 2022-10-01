// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOLLECTIONREQUEST_H
#define QTAWS_DESCRIBECOLLECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeCollectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT DescribeCollectionRequest : public RekognitionRequest {

public:
    DescribeCollectionRequest(const DescribeCollectionRequest &other);
    DescribeCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCollectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif

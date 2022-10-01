// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMPROCESSORREQUEST_H
#define QTAWS_DESCRIBESTREAMPROCESSORREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeStreamProcessorRequestPrivate;

class QTAWSREKOGNITION_EXPORT DescribeStreamProcessorRequest : public RekognitionRequest {

public:
    DescribeStreamProcessorRequest(const DescribeStreamProcessorRequest &other);
    DescribeStreamProcessorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif

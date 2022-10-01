// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKSETDRIFTREQUEST_H
#define QTAWS_DETECTSTACKSETDRIFTREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackSetDriftRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DetectStackSetDriftRequest : public CloudFormationRequest {

public:
    DetectStackSetDriftRequest(const DetectStackSetDriftRequest &other);
    DetectStackSetDriftRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectStackSetDriftRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

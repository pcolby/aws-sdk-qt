// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKDRIFTREQUEST_H
#define QTAWS_DETECTSTACKDRIFTREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackDriftRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DetectStackDriftRequest : public CloudFormationRequest {

public:
    DetectStackDriftRequest(const DetectStackDriftRequest &other);
    DetectStackDriftRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectStackDriftRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKRESOURCEDRIFTREQUEST_H
#define QTAWS_DETECTSTACKRESOURCEDRIFTREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackResourceDriftRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DetectStackResourceDriftRequest : public CloudFormationRequest {

public:
    DetectStackResourceDriftRequest(const DetectStackResourceDriftRequest &other);
    DetectStackResourceDriftRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectStackResourceDriftRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

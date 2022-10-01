// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELPACKAGINGJOBREQUEST_H
#define QTAWS_STARTMODELPACKAGINGJOBREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class StartModelPackagingJobRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT StartModelPackagingJobRequest : public LookoutVisionRequest {

public:
    StartModelPackagingJobRequest(const StartModelPackagingJobRequest &other);
    StartModelPackagingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartModelPackagingJobRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

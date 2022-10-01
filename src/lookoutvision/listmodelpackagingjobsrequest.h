// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGINGJOBSREQUEST_H
#define QTAWS_LISTMODELPACKAGINGJOBSREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class ListModelPackagingJobsRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT ListModelPackagingJobsRequest : public LookoutVisionRequest {

public:
    ListModelPackagingJobsRequest(const ListModelPackagingJobsRequest &other);
    ListModelPackagingJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelPackagingJobsRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

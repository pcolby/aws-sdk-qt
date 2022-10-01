// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSFORWORKTEAMREQUEST_H
#define QTAWS_LISTLABELINGJOBSFORWORKTEAMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsForWorkteamRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListLabelingJobsForWorkteamRequest : public SageMakerRequest {

public:
    ListLabelingJobsForWorkteamRequest(const ListLabelingJobsForWorkteamRequest &other);
    ListLabelingJobsForWorkteamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelingJobsForWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

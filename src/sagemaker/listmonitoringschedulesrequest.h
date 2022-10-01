// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGSCHEDULESREQUEST_H
#define QTAWS_LISTMONITORINGSCHEDULESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringSchedulesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListMonitoringSchedulesRequest : public SageMakerRequest {

public:
    ListMonitoringSchedulesRequest(const ListMonitoringSchedulesRequest &other);
    ListMonitoringSchedulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitoringSchedulesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

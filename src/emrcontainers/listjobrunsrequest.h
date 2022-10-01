// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBRUNSREQUEST_H
#define QTAWS_LISTJOBRUNSREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListJobRunsRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT ListJobRunsRequest : public EmrcontainersRequest {

public:
    ListJobRunsRequest(const ListJobRunsRequest &other);
    ListJobRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobRunsRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif

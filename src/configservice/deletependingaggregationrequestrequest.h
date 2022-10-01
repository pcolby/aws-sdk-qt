// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPENDINGAGGREGATIONREQUESTREQUEST_H
#define QTAWS_DELETEPENDINGAGGREGATIONREQUESTREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeletePendingAggregationRequestRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeletePendingAggregationRequestRequest : public ConfigServiceRequest {

public:
    DeletePendingAggregationRequestRequest(const DeletePendingAggregationRequestRequest &other);
    DeletePendingAggregationRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePendingAggregationRequestRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif

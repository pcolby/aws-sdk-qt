// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMEENDPOINTREQUEST_H
#define QTAWS_DELETEREALTIMEENDPOINTREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteRealtimeEndpointRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteRealtimeEndpointRequest : public MachineLearningRequest {

public:
    DeleteRealtimeEndpointRequest(const DeleteRealtimeEndpointRequest &other);
    DeleteRealtimeEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRealtimeEndpointRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif

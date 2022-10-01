// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREALTIMEENDPOINTREQUEST_H
#define QTAWS_CREATEREALTIMEENDPOINTREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateRealtimeEndpointRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT CreateRealtimeEndpointRequest : public MachineLearningRequest {

public:
    CreateRealtimeEndpointRequest(const CreateRealtimeEndpointRequest &other);
    CreateRealtimeEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRealtimeEndpointRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif

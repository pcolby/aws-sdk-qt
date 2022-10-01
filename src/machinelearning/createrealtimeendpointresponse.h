// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREALTIMEENDPOINTRESPONSE_H
#define QTAWS_CREATEREALTIMEENDPOINTRESPONSE_H

#include "machinelearningresponse.h"
#include "createrealtimeendpointrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateRealtimeEndpointResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateRealtimeEndpointResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateRealtimeEndpointResponse(const CreateRealtimeEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRealtimeEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRealtimeEndpointResponse)
    Q_DISABLE_COPY(CreateRealtimeEndpointResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMEENDPOINTRESPONSE_H
#define QTAWS_DELETEREALTIMEENDPOINTRESPONSE_H

#include "machinelearningresponse.h"
#include "deleterealtimeendpointrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteRealtimeEndpointResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteRealtimeEndpointResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DeleteRealtimeEndpointResponse(const DeleteRealtimeEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRealtimeEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRealtimeEndpointResponse)
    Q_DISABLE_COPY(DeleteRealtimeEndpointResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif

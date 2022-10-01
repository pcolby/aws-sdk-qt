// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTASKSTATUSRESPONSE_H
#define QTAWS_SETTASKSTATUSRESPONSE_H

#include "datapipelineresponse.h"
#include "settaskstatusrequest.h"

namespace QtAws {
namespace DataPipeline {

class SetTaskStatusResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT SetTaskStatusResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    SetTaskStatusResponse(const SetTaskStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTaskStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTaskStatusResponse)
    Q_DISABLE_COPY(SetTaskStatusResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEPIPELINERESPONSE_H
#define QTAWS_ACTIVATEPIPELINERESPONSE_H

#include "datapipelineresponse.h"
#include "activatepipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ActivatePipelineResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT ActivatePipelineResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    ActivatePipelineResponse(const ActivatePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivatePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivatePipelineResponse)
    Q_DISABLE_COPY(ActivatePipelineResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

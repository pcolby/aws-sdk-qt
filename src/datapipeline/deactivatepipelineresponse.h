// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEPIPELINERESPONSE_H
#define QTAWS_DEACTIVATEPIPELINERESPONSE_H

#include "datapipelineresponse.h"
#include "deactivatepipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DeactivatePipelineResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT DeactivatePipelineResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    DeactivatePipelineResponse(const DeactivatePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivatePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivatePipelineResponse)
    Q_DISABLE_COPY(DeactivatePipelineResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

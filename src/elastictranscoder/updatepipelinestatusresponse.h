// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINESTATUSRESPONSE_H
#define QTAWS_UPDATEPIPELINESTATUSRESPONSE_H

#include "elastictranscoderresponse.h"
#include "updatepipelinestatusrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineStatusResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT UpdatePipelineStatusResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    UpdatePipelineStatusResponse(const UpdatePipelineStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePipelineStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineStatusResponse)
    Q_DISABLE_COPY(UpdatePipelineStatusResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

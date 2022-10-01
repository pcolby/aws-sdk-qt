// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYPIPELINERESPONSE_H
#define QTAWS_LISTJOBSBYPIPELINERESPONSE_H

#include "elastictranscoderresponse.h"
#include "listjobsbypipelinerequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByPipelineResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT ListJobsByPipelineResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    ListJobsByPipelineResponse(const ListJobsByPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobsByPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsByPipelineResponse)
    Q_DISABLE_COPY(ListJobsByPipelineResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

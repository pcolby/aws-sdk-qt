// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPIPELINERESPONSE_H
#define QTAWS_READPIPELINERESPONSE_H

#include "elastictranscoderresponse.h"
#include "readpipelinerequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPipelineResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT ReadPipelineResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    ReadPipelineResponse(const ReadPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReadPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReadPipelineResponse)
    Q_DISABLE_COPY(ReadPipelineResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

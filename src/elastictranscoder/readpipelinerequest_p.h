// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPIPELINEREQUEST_P_H
#define QTAWS_READPIPELINEREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "readpipelinerequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPipelineRequest;

class ReadPipelineRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ReadPipelineRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ReadPipelineRequest * const q);
    ReadPipelineRequestPrivate(const ReadPipelineRequestPrivate &other,
                                   ReadPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReadPipelineRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

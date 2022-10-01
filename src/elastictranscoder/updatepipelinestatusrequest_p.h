// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINESTATUSREQUEST_P_H
#define QTAWS_UPDATEPIPELINESTATUSREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "updatepipelinestatusrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineStatusRequest;

class UpdatePipelineStatusRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    UpdatePipelineStatusRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   UpdatePipelineStatusRequest * const q);
    UpdatePipelineStatusRequestPrivate(const UpdatePipelineStatusRequestPrivate &other,
                                   UpdatePipelineStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineStatusRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

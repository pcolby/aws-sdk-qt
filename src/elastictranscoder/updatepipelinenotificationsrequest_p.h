// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINENOTIFICATIONSREQUEST_P_H
#define QTAWS_UPDATEPIPELINENOTIFICATIONSREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "updatepipelinenotificationsrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineNotificationsRequest;

class UpdatePipelineNotificationsRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    UpdatePipelineNotificationsRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   UpdatePipelineNotificationsRequest * const q);
    UpdatePipelineNotificationsRequestPrivate(const UpdatePipelineNotificationsRequestPrivate &other,
                                   UpdatePipelineNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineNotificationsRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

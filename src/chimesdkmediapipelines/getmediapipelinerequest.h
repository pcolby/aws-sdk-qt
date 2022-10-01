// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAPIPELINEREQUEST_H
#define QTAWS_GETMEDIAPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class GetMediaPipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT GetMediaPipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    GetMediaPipelineRequest(const GetMediaPipelineRequest &other);
    GetMediaPipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

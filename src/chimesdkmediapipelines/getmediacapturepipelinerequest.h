// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIACAPTUREPIPELINEREQUEST_H
#define QTAWS_GETMEDIACAPTUREPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class GetMediaCapturePipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT GetMediaCapturePipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    GetMediaCapturePipelineRequest(const GetMediaCapturePipelineRequest &other);
    GetMediaCapturePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaCapturePipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

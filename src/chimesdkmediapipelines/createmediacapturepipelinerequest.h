// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACAPTUREPIPELINEREQUEST_H
#define QTAWS_CREATEMEDIACAPTUREPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaCapturePipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT CreateMediaCapturePipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    CreateMediaCapturePipelineRequest(const CreateMediaCapturePipelineRequest &other);
    CreateMediaCapturePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMediaCapturePipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

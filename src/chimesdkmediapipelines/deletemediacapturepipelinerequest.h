// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIACAPTUREPIPELINEREQUEST_H
#define QTAWS_DELETEMEDIACAPTUREPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaCapturePipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT DeleteMediaCapturePipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    DeleteMediaCapturePipelineRequest(const DeleteMediaCapturePipelineRequest &other);
    DeleteMediaCapturePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMediaCapturePipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

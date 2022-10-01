// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIAPIPELINEREQUEST_H
#define QTAWS_DELETEMEDIAPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaPipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT DeleteMediaPipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    DeleteMediaPipelineRequest(const DeleteMediaPipelineRequest &other);
    DeleteMediaPipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMediaPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

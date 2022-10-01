// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACONCATENATIONPIPELINEREQUEST_H
#define QTAWS_CREATEMEDIACONCATENATIONPIPELINEREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaConcatenationPipelineRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT CreateMediaConcatenationPipelineRequest : public ChimeSdkMediaPipelinesRequest {

public:
    CreateMediaConcatenationPipelineRequest(const CreateMediaConcatenationPipelineRequest &other);
    CreateMediaConcatenationPipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMediaConcatenationPipelineRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

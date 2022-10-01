// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPIPELINEREQUEST_H
#define QTAWS_CREATEPIPELINEREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class CreatePipelineRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT CreatePipelineRequest : public ElasticTranscoderRequest {

public:
    CreatePipelineRequest(const CreatePipelineRequest &other);
    CreatePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePipelineRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

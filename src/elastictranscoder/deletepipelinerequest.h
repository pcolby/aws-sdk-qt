// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPIPELINEREQUEST_H
#define QTAWS_DELETEPIPELINEREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class DeletePipelineRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT DeletePipelineRequest : public ElasticTranscoderRequest {

public:
    DeletePipelineRequest(const DeletePipelineRequest &other);
    DeletePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePipelineRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

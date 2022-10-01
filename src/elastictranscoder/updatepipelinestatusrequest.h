// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINESTATUSREQUEST_H
#define QTAWS_UPDATEPIPELINESTATUSREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineStatusRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT UpdatePipelineStatusRequest : public ElasticTranscoderRequest {

public:
    UpdatePipelineStatusRequest(const UpdatePipelineStatusRequest &other);
    UpdatePipelineStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineStatusRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

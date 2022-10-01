// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYPIPELINEREQUEST_H
#define QTAWS_LISTJOBSBYPIPELINEREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByPipelineRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT ListJobsByPipelineRequest : public ElasticTranscoderRequest {

public:
    ListJobsByPipelineRequest(const ListJobsByPipelineRequest &other);
    ListJobsByPipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsByPipelineRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

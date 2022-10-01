// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINENOTIFICATIONSREQUEST_H
#define QTAWS_UPDATEPIPELINENOTIFICATIONSREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineNotificationsRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT UpdatePipelineNotificationsRequest : public ElasticTranscoderRequest {

public:
    UpdatePipelineNotificationsRequest(const UpdatePipelineNotificationsRequest &other);
    UpdatePipelineNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineNotificationsRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

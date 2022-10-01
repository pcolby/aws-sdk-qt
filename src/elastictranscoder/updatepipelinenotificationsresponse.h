// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINENOTIFICATIONSRESPONSE_H
#define QTAWS_UPDATEPIPELINENOTIFICATIONSRESPONSE_H

#include "elastictranscoderresponse.h"
#include "updatepipelinenotificationsrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineNotificationsResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT UpdatePipelineNotificationsResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    UpdatePipelineNotificationsResponse(const UpdatePipelineNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePipelineNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineNotificationsResponse)
    Q_DISABLE_COPY(UpdatePipelineNotificationsResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

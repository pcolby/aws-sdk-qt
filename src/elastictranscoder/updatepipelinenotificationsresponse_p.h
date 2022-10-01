// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINENOTIFICATIONSRESPONSE_P_H
#define QTAWS_UPDATEPIPELINENOTIFICATIONSRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class UpdatePipelineNotificationsResponse;

class UpdatePipelineNotificationsResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit UpdatePipelineNotificationsResponsePrivate(UpdatePipelineNotificationsResponse * const q);

    void parseUpdatePipelineNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineNotificationsResponse)
    Q_DISABLE_COPY(UpdatePipelineNotificationsResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONRESPONSE_H

#include "kinesisvideoresponse.h"
#include "updateimagegenerationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateImageGenerationConfigurationResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateImageGenerationConfigurationResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    UpdateImageGenerationConfigurationResponse(const UpdateImageGenerationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateImageGenerationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImageGenerationConfigurationResponse)
    Q_DISABLE_COPY(UpdateImageGenerationConfigurationResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif

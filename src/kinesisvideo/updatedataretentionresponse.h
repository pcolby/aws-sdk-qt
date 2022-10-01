// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATARETENTIONRESPONSE_H
#define QTAWS_UPDATEDATARETENTIONRESPONSE_H

#include "kinesisvideoresponse.h"
#include "updatedataretentionrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateDataRetentionResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateDataRetentionResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    UpdateDataRetentionResponse(const UpdateDataRetentionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataRetentionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataRetentionResponse)
    Q_DISABLE_COPY(UpdateDataRetentionResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATARETENTIONRESPONSE_P_H
#define QTAWS_UPDATEDATARETENTIONRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateDataRetentionResponse;

class UpdateDataRetentionResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit UpdateDataRetentionResponsePrivate(UpdateDataRetentionResponse * const q);

    void parseUpdateDataRetentionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataRetentionResponse)
    Q_DISABLE_COPY(UpdateDataRetentionResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif

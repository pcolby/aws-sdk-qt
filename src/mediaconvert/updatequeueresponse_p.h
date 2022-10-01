// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUERESPONSE_P_H
#define QTAWS_UPDATEQUEUERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class UpdateQueueResponse;

class UpdateQueueResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit UpdateQueueResponsePrivate(UpdateQueueResponse * const q);

    void parseUpdateQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQueueResponse)
    Q_DISABLE_COPY(UpdateQueueResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

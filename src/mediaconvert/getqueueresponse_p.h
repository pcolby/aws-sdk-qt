// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUERESPONSE_P_H
#define QTAWS_GETQUEUERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class GetQueueResponse;

class GetQueueResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit GetQueueResponsePrivate(GetQueueResponse * const q);

    void parseGetQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueueResponse)
    Q_DISABLE_COPY(GetQueueResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

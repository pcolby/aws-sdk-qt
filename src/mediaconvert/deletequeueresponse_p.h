// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUERESPONSE_P_H
#define QTAWS_DELETEQUEUERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class DeleteQueueResponse;

class DeleteQueueResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit DeleteQueueResponsePrivate(DeleteQueueResponse * const q);

    void parseDeleteQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueueResponse)
    Q_DISABLE_COPY(DeleteQueueResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

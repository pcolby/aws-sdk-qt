// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONOUTPUTRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONOUTPUTRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationOutputResponse;

class DeleteApplicationOutputResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DeleteApplicationOutputResponsePrivate(DeleteApplicationOutputResponse * const q);

    void parseDeleteApplicationOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationOutputResponse)
    Q_DISABLE_COPY(DeleteApplicationOutputResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationOutputResponse;

class AddApplicationOutputResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit AddApplicationOutputResponsePrivate(AddApplicationOutputResponse * const q);

    void parseAddApplicationOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationOutputResponse)
    Q_DISABLE_COPY(AddApplicationOutputResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

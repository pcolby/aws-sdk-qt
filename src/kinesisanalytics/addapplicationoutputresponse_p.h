// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationOutputResponse;

class AddApplicationOutputResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit AddApplicationOutputResponsePrivate(AddApplicationOutputResponse * const q);

    void parseAddApplicationOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationOutputResponse)
    Q_DISABLE_COPY(AddApplicationOutputResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

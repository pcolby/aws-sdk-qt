// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMARESPONSE_P_H
#define QTAWS_DISCOVERINPUTSCHEMARESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class DiscoverInputSchemaResponse;

class DiscoverInputSchemaResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit DiscoverInputSchemaResponsePrivate(DiscoverInputSchemaResponse * const q);

    void parseDiscoverInputSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DiscoverInputSchemaResponse)
    Q_DISABLE_COPY(DiscoverInputSchemaResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

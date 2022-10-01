// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMARESPONSE_P_H
#define QTAWS_DISCOVERINPUTSCHEMARESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DiscoverInputSchemaResponse;

class DiscoverInputSchemaResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DiscoverInputSchemaResponsePrivate(DiscoverInputSchemaResponse * const q);

    void parseDiscoverInputSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DiscoverInputSchemaResponse)
    Q_DISABLE_COPY(DiscoverInputSchemaResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

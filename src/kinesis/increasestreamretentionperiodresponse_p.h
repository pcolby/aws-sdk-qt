// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASESTREAMRETENTIONPERIODRESPONSE_P_H
#define QTAWS_INCREASESTREAMRETENTIONPERIODRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class IncreaseStreamRetentionPeriodResponse;

class IncreaseStreamRetentionPeriodResponsePrivate : public KinesisResponsePrivate {

public:

    explicit IncreaseStreamRetentionPeriodResponsePrivate(IncreaseStreamRetentionPeriodResponse * const q);

    void parseIncreaseStreamRetentionPeriodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IncreaseStreamRetentionPeriodResponse)
    Q_DISABLE_COPY(IncreaseStreamRetentionPeriodResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif

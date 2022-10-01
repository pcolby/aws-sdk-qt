// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASESTREAMRETENTIONPERIODRESPONSE_P_H
#define QTAWS_DECREASESTREAMRETENTIONPERIODRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DecreaseStreamRetentionPeriodResponse;

class DecreaseStreamRetentionPeriodResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DecreaseStreamRetentionPeriodResponsePrivate(DecreaseStreamRetentionPeriodResponse * const q);

    void parseDecreaseStreamRetentionPeriodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DecreaseStreamRetentionPeriodResponse)
    Q_DISABLE_COPY(DecreaseStreamRetentionPeriodResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif

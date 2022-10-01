// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASESTREAMRETENTIONPERIODRESPONSE_H
#define QTAWS_INCREASESTREAMRETENTIONPERIODRESPONSE_H

#include "kinesisresponse.h"
#include "increasestreamretentionperiodrequest.h"

namespace QtAws {
namespace Kinesis {

class IncreaseStreamRetentionPeriodResponsePrivate;

class QTAWSKINESIS_EXPORT IncreaseStreamRetentionPeriodResponse : public KinesisResponse {
    Q_OBJECT

public:
    IncreaseStreamRetentionPeriodResponse(const IncreaseStreamRetentionPeriodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IncreaseStreamRetentionPeriodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseStreamRetentionPeriodResponse)
    Q_DISABLE_COPY(IncreaseStreamRetentionPeriodResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif

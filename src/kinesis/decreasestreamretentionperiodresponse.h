// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASESTREAMRETENTIONPERIODRESPONSE_H
#define QTAWS_DECREASESTREAMRETENTIONPERIODRESPONSE_H

#include "kinesisresponse.h"
#include "decreasestreamretentionperiodrequest.h"

namespace QtAws {
namespace Kinesis {

class DecreaseStreamRetentionPeriodResponsePrivate;

class QTAWSKINESIS_EXPORT DecreaseStreamRetentionPeriodResponse : public KinesisResponse {
    Q_OBJECT

public:
    DecreaseStreamRetentionPeriodResponse(const DecreaseStreamRetentionPeriodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DecreaseStreamRetentionPeriodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecreaseStreamRetentionPeriodResponse)
    Q_DISABLE_COPY(DecreaseStreamRetentionPeriodResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif

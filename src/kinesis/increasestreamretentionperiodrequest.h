// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASESTREAMRETENTIONPERIODREQUEST_H
#define QTAWS_INCREASESTREAMRETENTIONPERIODREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class IncreaseStreamRetentionPeriodRequestPrivate;

class QTAWSKINESIS_EXPORT IncreaseStreamRetentionPeriodRequest : public KinesisRequest {

public:
    IncreaseStreamRetentionPeriodRequest(const IncreaseStreamRetentionPeriodRequest &other);
    IncreaseStreamRetentionPeriodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseStreamRetentionPeriodRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif

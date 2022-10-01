// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIMITSREQUEST_H
#define QTAWS_DESCRIBELIMITSREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeLimitsRequestPrivate;

class QTAWSKINESIS_EXPORT DescribeLimitsRequest : public KinesisRequest {

public:
    DescribeLimitsRequest(const DescribeLimitsRequest &other);
    DescribeLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLimitsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif

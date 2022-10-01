// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOICESREQUEST_H
#define QTAWS_DESCRIBEVOICESREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class DescribeVoicesRequestPrivate;

class QTAWSPOLLY_EXPORT DescribeVoicesRequest : public PollyRequest {

public:
    DescribeVoicesRequest(const DescribeVoicesRequest &other);
    DescribeVoicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVoicesRequest)

};

} // namespace Polly
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVODSOURCEREQUEST_H
#define QTAWS_DESCRIBEVODSOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeVodSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DescribeVodSourceRequest : public MediaTailorRequest {

public:
    DescribeVodSourceRequest(const DescribeVodSourceRequest &other);
    DescribeVodSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUCKETSREQUEST_H
#define QTAWS_DESCRIBEBUCKETSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DescribeBucketsRequestPrivate;

class QTAWSMACIE2_EXPORT DescribeBucketsRequest : public Macie2Request {

public:
    DescribeBucketsRequest(const DescribeBucketsRequest &other);
    DescribeBucketsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBucketsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEINDEXREQUEST_H
#define QTAWS_DESCRIBEPLACEINDEXREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DescribePlaceIndexRequestPrivate;

class QTAWSLOCATION_EXPORT DescribePlaceIndexRequest : public LocationRequest {

public:
    DescribePlaceIndexRequest(const DescribePlaceIndexRequest &other);
    DescribePlaceIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif

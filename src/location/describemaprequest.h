// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAPREQUEST_H
#define QTAWS_DESCRIBEMAPREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DescribeMapRequestPrivate;

class QTAWSLOCATION_EXPORT DescribeMapRequest : public LocationRequest {

public:
    DescribeMapRequest(const DescribeMapRequest &other);
    DescribeMapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif

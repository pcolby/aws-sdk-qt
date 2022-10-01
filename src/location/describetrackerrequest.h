// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRACKERREQUEST_H
#define QTAWS_DESCRIBETRACKERREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DescribeTrackerRequestPrivate;

class QTAWSLOCATION_EXPORT DescribeTrackerRequest : public LocationRequest {

public:
    DescribeTrackerRequest(const DescribeTrackerRequest &other);
    DescribeTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif

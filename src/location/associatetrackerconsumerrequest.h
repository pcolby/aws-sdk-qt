// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRACKERCONSUMERREQUEST_H
#define QTAWS_ASSOCIATETRACKERCONSUMERREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class AssociateTrackerConsumerRequestPrivate;

class QTAWSLOCATION_EXPORT AssociateTrackerConsumerRequest : public LocationRequest {

public:
    AssociateTrackerConsumerRequest(const AssociateTrackerConsumerRequest &other);
    AssociateTrackerConsumerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTrackerConsumerRequest)

};

} // namespace Location
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERCONSUMERSREQUEST_H
#define QTAWS_LISTTRACKERCONSUMERSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListTrackerConsumersRequestPrivate;

class QTAWSLOCATION_EXPORT ListTrackerConsumersRequest : public LocationRequest {

public:
    ListTrackerConsumersRequest(const ListTrackerConsumersRequest &other);
    ListTrackerConsumersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrackerConsumersRequest)

};

} // namespace Location
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERSREQUEST_H
#define QTAWS_LISTTRACKERSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListTrackersRequestPrivate;

class QTAWSLOCATION_EXPORT ListTrackersRequest : public LocationRequest {

public:
    ListTrackersRequest(const ListTrackersRequest &other);
    ListTrackersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrackersRequest)

};

} // namespace Location
} // namespace QtAws

#endif

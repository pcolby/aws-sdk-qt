// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRACKERREQUEST_H
#define QTAWS_UPDATETRACKERREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class UpdateTrackerRequestPrivate;

class QTAWSLOCATION_EXPORT UpdateTrackerRequest : public LocationRequest {

public:
    UpdateTrackerRequest(const UpdateTrackerRequest &other);
    UpdateTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRACKERREQUEST_H
#define QTAWS_DELETETRACKERREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DeleteTrackerRequestPrivate;

class QTAWSLOCATION_EXPORT DeleteTrackerRequest : public LocationRequest {

public:
    DeleteTrackerRequest(const DeleteTrackerRequest &other);
    DeleteTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif

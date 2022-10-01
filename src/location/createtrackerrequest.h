// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRACKERREQUEST_H
#define QTAWS_CREATETRACKERREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class CreateTrackerRequestPrivate;

class QTAWSLOCATION_EXPORT CreateTrackerRequest : public LocationRequest {

public:
    CreateTrackerRequest(const CreateTrackerRequest &other);
    CreateTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif

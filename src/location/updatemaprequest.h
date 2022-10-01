// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAPREQUEST_H
#define QTAWS_UPDATEMAPREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class UpdateMapRequestPrivate;

class QTAWSLOCATION_EXPORT UpdateMapRequest : public LocationRequest {

public:
    UpdateMapRequest(const UpdateMapRequest &other);
    UpdateMapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif

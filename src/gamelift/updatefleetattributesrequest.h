// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETATTRIBUTESREQUEST_H
#define QTAWS_UPDATEFLEETATTRIBUTESREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetAttributesRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateFleetAttributesRequest : public GameLiftRequest {

public:
    UpdateFleetAttributesRequest(const UpdateFleetAttributesRequest &other);
    UpdateFleetAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetAttributesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

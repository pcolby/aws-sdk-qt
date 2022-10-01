// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESERVECONTACTREQUEST_H
#define QTAWS_RESERVECONTACTREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ReserveContactRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ReserveContactRequest : public GroundStationRequest {

public:
    ReserveContactRequest(const ReserveContactRequest &other);
    ReserveContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReserveContactRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGREQUEST_H
#define QTAWS_UPDATECONFIGREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class UpdateConfigRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT UpdateConfigRequest : public GroundStationRequest {

public:
    UpdateConfigRequest(const UpdateConfigRequest &other);
    UpdateConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

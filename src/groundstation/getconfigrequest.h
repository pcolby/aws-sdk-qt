// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGREQUEST_H
#define QTAWS_GETCONFIGREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GetConfigRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT GetConfigRequest : public GroundStationRequest {

public:
    GetConfigRequest(const GetConfigRequest &other);
    GetConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

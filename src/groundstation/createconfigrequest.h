// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGREQUEST_H
#define QTAWS_CREATECONFIGREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class CreateConfigRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT CreateConfigRequest : public GroundStationRequest {

public:
    CreateConfigRequest(const CreateConfigRequest &other);
    CreateConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

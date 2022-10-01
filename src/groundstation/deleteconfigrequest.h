// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGREQUEST_H
#define QTAWS_DELETECONFIGREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteConfigRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT DeleteConfigRequest : public GroundStationRequest {

public:
    DeleteConfigRequest(const DeleteConfigRequest &other);
    DeleteConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

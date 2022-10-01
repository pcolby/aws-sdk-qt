// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLOPERATIONREQUEST_H
#define QTAWS_GETCONTROLOPERATIONREQUEST_H

#include "controltowerrequest.h"

namespace QtAws {
namespace ControlTower {

class GetControlOperationRequestPrivate;

class QTAWSCONTROLTOWER_EXPORT GetControlOperationRequest : public ControlTowerRequest {

public:
    GetControlOperationRequest(const GetControlOperationRequest &other);
    GetControlOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetControlOperationRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif

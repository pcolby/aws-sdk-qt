// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECONTROLREQUEST_H
#define QTAWS_DISABLECONTROLREQUEST_H

#include "controltowerrequest.h"

namespace QtAws {
namespace ControlTower {

class DisableControlRequestPrivate;

class QTAWSCONTROLTOWER_EXPORT DisableControlRequest : public ControlTowerRequest {

public:
    DisableControlRequest(const DisableControlRequest &other);
    DisableControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableControlRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif

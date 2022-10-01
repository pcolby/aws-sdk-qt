// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECONTROLREQUEST_H
#define QTAWS_ENABLECONTROLREQUEST_H

#include "controltowerrequest.h"

namespace QtAws {
namespace ControlTower {

class EnableControlRequestPrivate;

class QTAWSCONTROLTOWER_EXPORT EnableControlRequest : public ControlTowerRequest {

public:
    EnableControlRequest(const EnableControlRequest &other);
    EnableControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableControlRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif

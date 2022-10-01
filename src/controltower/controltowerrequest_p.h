// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTROLTOWERREQUEST_P_H
#define QTAWS_CONTROLTOWERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "controltowerrequest.h"

namespace QtAws {
namespace ControlTower {

class ControlTowerRequest;

class ControlTowerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ControlTowerRequest::Action action; ///< ControlTower action to be performed.
    QString apiVersion;        ///< ControlTower API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ControlTower request (query string) parameters. @todo?

    ControlTowerRequestPrivate(const ControlTowerRequest::Action action, ControlTowerRequest * const q);
    ControlTowerRequestPrivate(const ControlTowerRequestPrivate &other, ControlTowerRequest * const q);

    static QString toString(const ControlTowerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ControlTowerRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif

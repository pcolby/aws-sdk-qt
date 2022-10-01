// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTEQUIPMENTREQUEST_P_H
#define QTAWS_LOOKOUTEQUIPMENTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class LookoutEquipmentRequest;

class LookoutEquipmentRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LookoutEquipmentRequest::Action action; ///< LookoutEquipment action to be performed.
    QString apiVersion;        ///< LookoutEquipment API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LookoutEquipment request (query string) parameters. @todo?

    LookoutEquipmentRequestPrivate(const LookoutEquipmentRequest::Action action, LookoutEquipmentRequest * const q);
    LookoutEquipmentRequestPrivate(const LookoutEquipmentRequestPrivate &other, LookoutEquipmentRequest * const q);

    static QString toString(const LookoutEquipmentRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LookoutEquipmentRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif

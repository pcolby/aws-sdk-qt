// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RAMREQUEST_P_H
#define QTAWS_RAMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class RamRequest;

class RamRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RamRequest::Action action; ///< Ram action to be performed.
    QString apiVersion;        ///< Ram API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ram request (query string) parameters. @todo?

    RamRequestPrivate(const RamRequest::Action action, RamRequest * const q);
    RamRequestPrivate(const RamRequestPrivate &other, RamRequest * const q);

    static QString toString(const RamRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RamRequest)

};

} // namespace Ram
} // namespace QtAws

#endif

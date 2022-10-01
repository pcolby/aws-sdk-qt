// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROBOMAKERREQUEST_P_H
#define QTAWS_ROBOMAKERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class RoboMakerRequest;

class RoboMakerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RoboMakerRequest::Action action; ///< RoboMaker action to be performed.
    QString apiVersion;        ///< RoboMaker API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RoboMaker request (query string) parameters. @todo?

    RoboMakerRequestPrivate(const RoboMakerRequest::Action action, RoboMakerRequest * const q);
    RoboMakerRequestPrivate(const RoboMakerRequestPrivate &other, RoboMakerRequest * const q);

    static QString toString(const RoboMakerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RoboMakerRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

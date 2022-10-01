// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPREQUEST_P_H
#define QTAWS_AMPREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "amprequest.h"

namespace QtAws {
namespace Amp {

class AmpRequest;

class AmpRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AmpRequest::Action action; ///< Amp action to be performed.
    QString apiVersion;        ///< Amp API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Amp request (query string) parameters. @todo?

    AmpRequestPrivate(const AmpRequest::Action action, AmpRequest * const q);
    AmpRequestPrivate(const AmpRequestPrivate &other, AmpRequest * const q);

    static QString toString(const AmpRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AmpRequest)

};

} // namespace Amp
} // namespace QtAws

#endif

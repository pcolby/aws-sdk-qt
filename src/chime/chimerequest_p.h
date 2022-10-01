// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMEREQUEST_P_H
#define QTAWS_CHIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ChimeRequest;

class ChimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ChimeRequest::Action action; ///< Chime action to be performed.
    QString apiVersion;        ///< Chime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Chime request (query string) parameters. @todo?

    ChimeRequestPrivate(const ChimeRequest::Action action, ChimeRequest * const q);
    ChimeRequestPrivate(const ChimeRequestPrivate &other, ChimeRequest * const q);

    static QString toString(const ChimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ChimeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

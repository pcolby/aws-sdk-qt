// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NEPTUNEREQUEST_P_H
#define QTAWS_NEPTUNEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class NeptuneRequest;

class NeptuneRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    NeptuneRequest::Action action; ///< Neptune action to be performed.
    QString apiVersion;        ///< Neptune API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Neptune request (query string) parameters. @todo?

    NeptuneRequestPrivate(const NeptuneRequest::Action action, NeptuneRequest * const q);
    NeptuneRequestPrivate(const NeptuneRequestPrivate &other, NeptuneRequest * const q);

    static QString toString(const NeptuneRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(NeptuneRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DRSREQUEST_P_H
#define QTAWS_DRSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DrsRequest;

class DrsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DrsRequest::Action action; ///< Drs action to be performed.
    QString apiVersion;        ///< Drs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Drs request (query string) parameters. @todo?

    DrsRequestPrivate(const DrsRequest::Action action, DrsRequest * const q);
    DrsRequestPrivate(const DrsRequestPrivate &other, DrsRequest * const q);

    static QString toString(const DrsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DrsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

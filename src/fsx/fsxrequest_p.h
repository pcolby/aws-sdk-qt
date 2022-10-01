// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FSXREQUEST_P_H
#define QTAWS_FSXREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class FSxRequest;

class FSxRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FSxRequest::Action action; ///< FSx action to be performed.
    QString apiVersion;        ///< FSx API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< FSx request (query string) parameters. @todo?

    FSxRequestPrivate(const FSxRequest::Action action, FSxRequest * const q);
    FSxRequestPrivate(const FSxRequestPrivate &other, FSxRequest * const q);

    static QString toString(const FSxRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FSxRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

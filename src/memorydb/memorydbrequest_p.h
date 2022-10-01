// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEMORYDBREQUEST_P_H
#define QTAWS_MEMORYDBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class MemoryDbRequest;

class MemoryDbRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MemoryDbRequest::Action action; ///< MemoryDb action to be performed.
    QString apiVersion;        ///< MemoryDb API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MemoryDb request (query string) parameters. @todo?

    MemoryDbRequestPrivate(const MemoryDbRequest::Action action, MemoryDbRequest * const q);
    MemoryDbRequestPrivate(const MemoryDbRequestPrivate &other, MemoryDbRequest * const q);

    static QString toString(const MemoryDbRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MemoryDbRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOCDBREQUEST_P_H
#define QTAWS_DOCDBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DocDbRequest;

class DocDbRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DocDbRequest::Action action; ///< DocDb action to be performed.
    QString apiVersion;        ///< DocDb API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DocDb request (query string) parameters. @todo?

    DocDbRequestPrivate(const DocDbRequest::Action action, DocDbRequest * const q);
    DocDbRequestPrivate(const DocDbRequestPrivate &other, DocDbRequest * const q);

    static QString toString(const DocDbRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DocDbRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif

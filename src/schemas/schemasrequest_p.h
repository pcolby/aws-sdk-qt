// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEMASREQUEST_P_H
#define QTAWS_SCHEMASREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class SchemasRequest;

class SchemasRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SchemasRequest::Action action; ///< Schemas action to be performed.
    QString apiVersion;        ///< Schemas API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Schemas request (query string) parameters. @todo?

    SchemasRequestPrivate(const SchemasRequest::Action action, SchemasRequest * const q);
    SchemasRequestPrivate(const SchemasRequestPrivate &other, SchemasRequest * const q);

    static QString toString(const SchemasRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SchemasRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif

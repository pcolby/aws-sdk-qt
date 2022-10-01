// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DAXREQUEST_P_H
#define QTAWS_DAXREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class DaxRequest;

class DaxRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DaxRequest::Action action; ///< Dax action to be performed.
    QString apiVersion;        ///< Dax API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Dax request (query string) parameters. @todo?

    DaxRequestPrivate(const DaxRequest::Action action, DaxRequest * const q);
    DaxRequestPrivate(const DaxRequestPrivate &other, DaxRequest * const q);

    static QString toString(const DaxRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DaxRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

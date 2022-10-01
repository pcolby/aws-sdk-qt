// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMCONTACTSREQUEST_P_H
#define QTAWS_SSMCONTACTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class SsmContactsRequest;

class SsmContactsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsmContactsRequest::Action action; ///< SsmContacts action to be performed.
    QString apiVersion;        ///< SsmContacts API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SsmContacts request (query string) parameters. @todo?

    SsmContactsRequestPrivate(const SsmContactsRequest::Action action, SsmContactsRequest * const q);
    SsmContactsRequestPrivate(const SsmContactsRequestPrivate &other, SsmContactsRequest * const q);

    static QString toString(const SsmContactsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsmContactsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

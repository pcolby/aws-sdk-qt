// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRPUBLICREQUEST_P_H
#define QTAWS_ECRPUBLICREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class EcrPublicRequest;

class EcrPublicRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EcrPublicRequest::Action action; ///< EcrPublic action to be performed.
    QString apiVersion;        ///< EcrPublic API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EcrPublic request (query string) parameters. @todo?

    EcrPublicRequestPrivate(const EcrPublicRequest::Action action, EcrPublicRequest * const q);
    EcrPublicRequestPrivate(const EcrPublicRequestPrivate &other, EcrPublicRequest * const q);

    static QString toString(const EcrPublicRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EcrPublicRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

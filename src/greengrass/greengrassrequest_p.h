// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSREQUEST_P_H
#define QTAWS_GREENGRASSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GreengrassRequest;

class GreengrassRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GreengrassRequest::Action action; ///< Greengrass action to be performed.
    QString apiVersion;        ///< Greengrass API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Greengrass request (query string) parameters. @todo?

    GreengrassRequestPrivate(const GreengrassRequest::Action action, GreengrassRequest * const q);
    GreengrassRequestPrivate(const GreengrassRequestPrivate &other, GreengrassRequest * const q);

    static QString toString(const GreengrassRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GreengrassRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

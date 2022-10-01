// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYUIBUILDERREQUEST_P_H
#define QTAWS_AMPLIFYUIBUILDERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class AmplifyUIBuilderRequest;

class AmplifyUIBuilderRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AmplifyUIBuilderRequest::Action action; ///< AmplifyUIBuilder action to be performed.
    QString apiVersion;        ///< AmplifyUIBuilder API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AmplifyUIBuilder request (query string) parameters. @todo?

    AmplifyUIBuilderRequestPrivate(const AmplifyUIBuilderRequest::Action action, AmplifyUIBuilderRequest * const q);
    AmplifyUIBuilderRequestPrivate(const AmplifyUIBuilderRequestPrivate &other, AmplifyUIBuilderRequest * const q);

    static QString toString(const AmplifyUIBuilderRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AmplifyUIBuilderRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif

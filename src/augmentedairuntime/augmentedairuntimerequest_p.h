/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_AUGMENTEDAIRUNTIMEREQUEST_P_H
#define QTAWS_AUGMENTEDAIRUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "augmentedairuntimerequest.h"

namespace QtAws {
namespace AugmentedAIRuntime {

class AugmentedAIRuntimeRequest;

class AugmentedAIRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AugmentedAIRuntimeRequest::Action action; ///< AugmentedAIRuntime action to be performed.
    QString apiVersion;        ///< AugmentedAIRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AugmentedAIRuntime request (query string) parameters. @todo?

    AugmentedAIRuntimeRequestPrivate(const AugmentedAIRuntimeRequest::Action action, AugmentedAIRuntimeRequest * const q);
    AugmentedAIRuntimeRequestPrivate(const AugmentedAIRuntimeRequestPrivate &other, AugmentedAIRuntimeRequest * const q);

    static QString toString(const AugmentedAIRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AugmentedAIRuntimeRequest)

};

} // namespace AugmentedAIRuntime
} // namespace QtAws

#endif

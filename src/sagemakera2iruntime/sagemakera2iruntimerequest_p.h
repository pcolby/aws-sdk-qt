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

#ifndef QTAWS_SAGEMAKERA2IRUNTIMEREQUEST_P_H
#define QTAWS_SAGEMAKERA2IRUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeRequest;

class SageMakerA2IRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SageMakerA2IRuntimeRequest::Action action; ///< SageMakerA2IRuntime action to be performed.
    QString apiVersion;        ///< SageMakerA2IRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SageMakerA2IRuntime request (query string) parameters. @todo?

    SageMakerA2IRuntimeRequestPrivate(const SageMakerA2IRuntimeRequest::Action action, SageMakerA2IRuntimeRequest * const q);
    SageMakerA2IRuntimeRequestPrivate(const SageMakerA2IRuntimeRequestPrivate &other, SageMakerA2IRuntimeRequest * const q);

    static QString toString(const SageMakerA2IRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SageMakerA2IRuntimeRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif

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

#ifndef QTAWS_SAGEMAKERA2IRUNTIMECLIENT_P_H
#define QTAWS_SAGEMAKERA2IRUNTIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeClient;

class SageMakerA2IRuntimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SageMakerA2IRuntimeClientPrivate(SageMakerA2IRuntimeClient * const q);

private:
    Q_DECLARE_PUBLIC(SageMakerA2IRuntimeClient)
    Q_DISABLE_COPY(SageMakerA2IRuntimeClientPrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif

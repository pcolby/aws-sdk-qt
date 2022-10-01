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

#ifndef QTAWS_CHIMESDKMEDIAPIPELINESREQUEST_P_H
#define QTAWS_CHIMESDKMEDIAPIPELINESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ChimeSdkMediaPipelinesRequest;

class ChimeSdkMediaPipelinesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ChimeSdkMediaPipelinesRequest::Action action; ///< ChimeSdkMediaPipelines action to be performed.
    QString apiVersion;        ///< ChimeSdkMediaPipelines API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ChimeSdkMediaPipelines request (query string) parameters. @todo?

    ChimeSdkMediaPipelinesRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action, ChimeSdkMediaPipelinesRequest * const q);
    ChimeSdkMediaPipelinesRequestPrivate(const ChimeSdkMediaPipelinesRequestPrivate &other, ChimeSdkMediaPipelinesRequest * const q);

    static QString toString(const ChimeSdkMediaPipelinesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMediaPipelinesRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

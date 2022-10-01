// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMWRITEREQUEST_P_H
#define QTAWS_TIMESTREAMWRITEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class TimestreamWriteRequest;

class TimestreamWriteRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TimestreamWriteRequest::Action action; ///< TimestreamWrite action to be performed.
    QString apiVersion;        ///< TimestreamWrite API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< TimestreamWrite request (query string) parameters. @todo?

    TimestreamWriteRequestPrivate(const TimestreamWriteRequest::Action action, TimestreamWriteRequest * const q);
    TimestreamWriteRequestPrivate(const TimestreamWriteRequestPrivate &other, TimestreamWriteRequest * const q);

    static QString toString(const TimestreamWriteRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TimestreamWriteRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif

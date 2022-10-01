// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3CONTROLREQUEST_P_H
#define QTAWS_S3CONTROLREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class S3ControlRequest;

class S3ControlRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    S3ControlRequest::Action action; ///< S3Control action to be performed.
    QString apiVersion;        ///< S3Control API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3Control request (query string) parameters. @todo?

    S3ControlRequestPrivate(const S3ControlRequest::Action action, S3ControlRequest * const q);
    S3ControlRequestPrivate(const S3ControlRequestPrivate &other, S3ControlRequest * const q);

    static QString toString(const S3ControlRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(S3ControlRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

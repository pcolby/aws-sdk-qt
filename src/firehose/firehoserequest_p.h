// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FIREHOSEREQUEST_P_H
#define QTAWS_FIREHOSEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class FirehoseRequest;

class FirehoseRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FirehoseRequest::Action action; ///< Firehose action to be performed.
    QString apiVersion;        ///< Firehose API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Firehose request (query string) parameters. @todo?

    FirehoseRequestPrivate(const FirehoseRequest::Action action, FirehoseRequest * const q);
    FirehoseRequestPrivate(const FirehoseRequestPrivate &other, FirehoseRequest * const q);

    static QString toString(const FirehoseRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FirehoseRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif

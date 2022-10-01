// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EBSREQUEST_P_H
#define QTAWS_EBSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class EbsRequest;

class EbsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EbsRequest::Action action; ///< Ebs action to be performed.
    QString apiVersion;        ///< Ebs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ebs request (query string) parameters. @todo?

    EbsRequestPrivate(const EbsRequest::Action action, EbsRequest * const q);
    EbsRequestPrivate(const EbsRequestPrivate &other, EbsRequest * const q);

    static QString toString(const EbsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EbsRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif

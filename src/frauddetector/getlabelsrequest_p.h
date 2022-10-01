// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELSREQUEST_P_H
#define QTAWS_GETLABELSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getlabelsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetLabelsRequest;

class GetLabelsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetLabelsRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetLabelsRequest * const q);
    GetLabelsRequestPrivate(const GetLabelsRequestPrivate &other,
                                   GetLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLabelsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

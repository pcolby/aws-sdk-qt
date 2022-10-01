// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLABELREQUEST_P_H
#define QTAWS_PUTLABELREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putlabelrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutLabelRequest;

class PutLabelRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutLabelRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutLabelRequest * const q);
    PutLabelRequestPrivate(const PutLabelRequestPrivate &other,
                                   PutLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLabelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

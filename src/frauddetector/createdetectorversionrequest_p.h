// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORVERSIONREQUEST_P_H
#define QTAWS_CREATEDETECTORVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "createdetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateDetectorVersionRequest;

class CreateDetectorVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CreateDetectorVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   CreateDetectorVersionRequest * const q);
    CreateDetectorVersionRequestPrivate(const CreateDetectorVersionRequestPrivate &other,
                                   CreateDetectorVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEMETADATAREQUEST_P_H
#define QTAWS_UPDATERULEMETADATAREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updaterulemetadatarequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleMetadataRequest;

class UpdateRuleMetadataRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateRuleMetadataRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateRuleMetadataRequest * const q);
    UpdateRuleMetadataRequestPrivate(const UpdateRuleMetadataRequestPrivate &other,
                                   UpdateRuleMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleMetadataRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

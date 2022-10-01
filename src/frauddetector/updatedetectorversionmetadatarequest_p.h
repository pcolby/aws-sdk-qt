// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONMETADATAREQUEST_P_H
#define QTAWS_UPDATEDETECTORVERSIONMETADATAREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatedetectorversionmetadatarequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionMetadataRequest;

class UpdateDetectorVersionMetadataRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateDetectorVersionMetadataRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateDetectorVersionMetadataRequest * const q);
    UpdateDetectorVersionMetadataRequestPrivate(const UpdateDetectorVersionMetadataRequestPrivate &other,
                                   UpdateDetectorVersionMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionMetadataRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

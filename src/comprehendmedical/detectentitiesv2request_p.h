// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESV2REQUEST_P_H
#define QTAWS_DETECTENTITIESV2REQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "detectentitiesv2request.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectEntitiesV2Request;

class DetectEntitiesV2RequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DetectEntitiesV2RequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DetectEntitiesV2Request * const q);
    DetectEntitiesV2RequestPrivate(const DetectEntitiesV2RequestPrivate &other,
                                   DetectEntitiesV2Request * const q);

private:
    Q_DECLARE_PUBLIC(DetectEntitiesV2Request)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif

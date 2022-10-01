// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESREQUEST_P_H
#define QTAWS_DETECTENTITIESREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "detectentitiesrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectEntitiesRequest;

class DetectEntitiesRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DetectEntitiesRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DetectEntitiesRequest * const q);
    DetectEntitiesRequestPrivate(const DetectEntitiesRequestPrivate &other,
                                   DetectEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectEntitiesRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPHIREQUEST_P_H
#define QTAWS_DETECTPHIREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "detectphirequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectPHIRequest;

class DetectPHIRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DetectPHIRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DetectPHIRequest * const q);
    DetectPHIRequestPrivate(const DetectPHIRequestPrivate &other,
                                   DetectPHIRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectPHIRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif

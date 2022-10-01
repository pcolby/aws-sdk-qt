// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTREQUEST_P_H
#define QTAWS_GETEXPERIMENTREQUEST_P_H

#include "fisrequest_p.h"
#include "getexperimentrequest.h"

namespace QtAws {
namespace Fis {

class GetExperimentRequest;

class GetExperimentRequestPrivate : public FisRequestPrivate {

public:
    GetExperimentRequestPrivate(const FisRequest::Action action,
                                   GetExperimentRequest * const q);
    GetExperimentRequestPrivate(const GetExperimentRequestPrivate &other,
                                   GetExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExperimentRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

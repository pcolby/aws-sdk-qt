// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LABELPARAMETERVERSIONREQUEST_P_H
#define QTAWS_LABELPARAMETERVERSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "labelparameterversionrequest.h"

namespace QtAws {
namespace Ssm {

class LabelParameterVersionRequest;

class LabelParameterVersionRequestPrivate : public SsmRequestPrivate {

public:
    LabelParameterVersionRequestPrivate(const SsmRequest::Action action,
                                   LabelParameterVersionRequest * const q);
    LabelParameterVersionRequestPrivate(const LabelParameterVersionRequestPrivate &other,
                                   LabelParameterVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(LabelParameterVersionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

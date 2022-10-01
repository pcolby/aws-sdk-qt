// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSTACKSTOSTACKSETREQUEST_P_H
#define QTAWS_IMPORTSTACKSTOSTACKSETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "importstackstostacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class ImportStacksToStackSetRequest;

class ImportStacksToStackSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    ImportStacksToStackSetRequestPrivate(const CloudFormationRequest::Action action,
                                   ImportStacksToStackSetRequest * const q);
    ImportStacksToStackSetRequestPrivate(const ImportStacksToStackSetRequestPrivate &other,
                                   ImportStacksToStackSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportStacksToStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

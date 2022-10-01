// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTPOLICIESREQUEST_P_H
#define QTAWS_LISTPROJECTPOLICIESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "listprojectpoliciesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListProjectPoliciesRequest;

class ListProjectPoliciesRequestPrivate : public RekognitionRequestPrivate {

public:
    ListProjectPoliciesRequestPrivate(const RekognitionRequest::Action action,
                                   ListProjectPoliciesRequest * const q);
    ListProjectPoliciesRequestPrivate(const ListProjectPoliciesRequestPrivate &other,
                                   ListProjectPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectPoliciesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif

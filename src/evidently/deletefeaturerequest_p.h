// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATUREREQUEST_P_H
#define QTAWS_DELETEFEATUREREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "deletefeaturerequest.h"

namespace QtAws {
namespace Evidently {

class DeleteFeatureRequest;

class DeleteFeatureRequestPrivate : public EvidentlyRequestPrivate {

public:
    DeleteFeatureRequestPrivate(const EvidentlyRequest::Action action,
                                   DeleteFeatureRequest * const q);
    DeleteFeatureRequestPrivate(const DeleteFeatureRequestPrivate &other,
                                   DeleteFeatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

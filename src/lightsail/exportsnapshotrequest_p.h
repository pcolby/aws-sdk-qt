// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSNAPSHOTREQUEST_P_H
#define QTAWS_EXPORTSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "exportsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class ExportSnapshotRequest;

class ExportSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    ExportSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   ExportSnapshotRequest * const q);
    ExportSnapshotRequestPrivate(const ExportSnapshotRequestPrivate &other,
                                   ExportSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTPROJECTREQUEST_P_H
#define QTAWS_EXPORTPROJECTREQUEST_P_H

#include "mobilerequest_p.h"
#include "exportprojectrequest.h"

namespace QtAws {
namespace Mobile {

class ExportProjectRequest;

class ExportProjectRequestPrivate : public MobileRequestPrivate {

public:
    ExportProjectRequestPrivate(const MobileRequest::Action action,
                                   ExportProjectRequest * const q);
    ExportProjectRequestPrivate(const ExportProjectRequestPrivate &other,
                                   ExportProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportProjectRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif

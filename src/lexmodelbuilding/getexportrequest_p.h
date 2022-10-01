// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTREQUEST_P_H
#define QTAWS_GETEXPORTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getexportrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetExportRequest;

class GetExportRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetExportRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetExportRequest * const q);
    GetExportRequestPrivate(const GetExportRequestPrivate &other,
                                   GetExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExportRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif

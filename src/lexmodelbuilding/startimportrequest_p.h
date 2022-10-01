// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTREQUEST_P_H
#define QTAWS_STARTIMPORTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "startimportrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class StartImportRequest;

class StartImportRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    StartImportRequestPrivate(const LexModelBuildingRequest::Action action,
                                   StartImportRequest * const q);
    StartImportRequestPrivate(const StartImportRequestPrivate &other,
                                   StartImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImportRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTREQUEST_P_H
#define QTAWS_GETIMPORTREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getimportrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetImportRequest;

class GetImportRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetImportRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetImportRequest * const q);
    GetImportRequestPrivate(const GetImportRequestPrivate &other,
                                   GetImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImportRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif

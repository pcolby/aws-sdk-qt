// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATALAKESETTINGSREQUEST_P_H
#define QTAWS_GETDATALAKESETTINGSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getdatalakesettingsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetDataLakeSettingsRequest;

class GetDataLakeSettingsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetDataLakeSettingsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetDataLakeSettingsRequest * const q);
    GetDataLakeSettingsRequestPrivate(const GetDataLakeSettingsRequestPrivate &other,
                                   GetDataLakeSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataLakeSettingsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

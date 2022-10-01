// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATALAKESETTINGSREQUEST_P_H
#define QTAWS_PUTDATALAKESETTINGSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "putdatalakesettingsrequest.h"

namespace QtAws {
namespace LakeFormation {

class PutDataLakeSettingsRequest;

class PutDataLakeSettingsRequestPrivate : public LakeFormationRequestPrivate {

public:
    PutDataLakeSettingsRequestPrivate(const LakeFormationRequest::Action action,
                                   PutDataLakeSettingsRequest * const q);
    PutDataLakeSettingsRequestPrivate(const PutDataLakeSettingsRequestPrivate &other,
                                   PutDataLakeSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDataLakeSettingsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

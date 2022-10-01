// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCUSTOMDBENGINEVERSIONREQUEST_P_H
#define QTAWS_MODIFYCUSTOMDBENGINEVERSIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifycustomdbengineversionrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCustomDBEngineVersionRequest;

class ModifyCustomDBEngineVersionRequestPrivate : public RdsRequestPrivate {

public:
    ModifyCustomDBEngineVersionRequestPrivate(const RdsRequest::Action action,
                                   ModifyCustomDBEngineVersionRequest * const q);
    ModifyCustomDBEngineVersionRequestPrivate(const ModifyCustomDBEngineVersionRequestPrivate &other,
                                   ModifyCustomDBEngineVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCustomDBEngineVersionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

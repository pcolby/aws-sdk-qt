// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDBENGINEVERSIONREQUEST_P_H
#define QTAWS_CREATECUSTOMDBENGINEVERSIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "createcustomdbengineversionrequest.h"

namespace QtAws {
namespace Rds {

class CreateCustomDBEngineVersionRequest;

class CreateCustomDBEngineVersionRequestPrivate : public RdsRequestPrivate {

public:
    CreateCustomDBEngineVersionRequestPrivate(const RdsRequest::Action action,
                                   CreateCustomDBEngineVersionRequest * const q);
    CreateCustomDBEngineVersionRequestPrivate(const CreateCustomDBEngineVersionRequestPrivate &other,
                                   CreateCustomDBEngineVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomDBEngineVersionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

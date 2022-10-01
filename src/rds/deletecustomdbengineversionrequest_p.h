// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDBENGINEVERSIONREQUEST_P_H
#define QTAWS_DELETECUSTOMDBENGINEVERSIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletecustomdbengineversionrequest.h"

namespace QtAws {
namespace Rds {

class DeleteCustomDBEngineVersionRequest;

class DeleteCustomDBEngineVersionRequestPrivate : public RdsRequestPrivate {

public:
    DeleteCustomDBEngineVersionRequestPrivate(const RdsRequest::Action action,
                                   DeleteCustomDBEngineVersionRequest * const q);
    DeleteCustomDBEngineVersionRequestPrivate(const DeleteCustomDBEngineVersionRequestPrivate &other,
                                   DeleteCustomDBEngineVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomDBEngineVersionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

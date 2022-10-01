// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDURLREQUEST_P_H
#define QTAWS_CREATETESTGRIDURLREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createtestgridurlrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridUrlRequest;

class CreateTestGridUrlRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateTestGridUrlRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateTestGridUrlRequest * const q);
    CreateTestGridUrlRequestPrivate(const CreateTestGridUrlRequestPrivate &other,
                                   CreateTestGridUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTestGridUrlRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDJOBTEMPLATEREQUEST_P_H
#define QTAWS_DESCRIBEMANAGEDJOBTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "describemanagedjobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeManagedJobTemplateRequest;

class DescribeManagedJobTemplateRequestPrivate : public IoTRequestPrivate {

public:
    DescribeManagedJobTemplateRequestPrivate(const IoTRequest::Action action,
                                   DescribeManagedJobTemplateRequest * const q);
    DescribeManagedJobTemplateRequestPrivate(const DescribeManagedJobTemplateRequestPrivate &other,
                                   DescribeManagedJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeManagedJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

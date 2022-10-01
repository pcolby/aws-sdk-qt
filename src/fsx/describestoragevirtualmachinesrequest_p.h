// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGEVIRTUALMACHINESREQUEST_P_H
#define QTAWS_DESCRIBESTORAGEVIRTUALMACHINESREQUEST_P_H

#include "fsxrequest_p.h"
#include "describestoragevirtualmachinesrequest.h"

namespace QtAws {
namespace FSx {

class DescribeStorageVirtualMachinesRequest;

class DescribeStorageVirtualMachinesRequestPrivate : public FSxRequestPrivate {

public:
    DescribeStorageVirtualMachinesRequestPrivate(const FSxRequest::Action action,
                                   DescribeStorageVirtualMachinesRequest * const q);
    DescribeStorageVirtualMachinesRequestPrivate(const DescribeStorageVirtualMachinesRequestPrivate &other,
                                   DescribeStorageVirtualMachinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStorageVirtualMachinesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

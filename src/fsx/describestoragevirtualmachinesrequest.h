// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGEVIRTUALMACHINESREQUEST_H
#define QTAWS_DESCRIBESTORAGEVIRTUALMACHINESREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeStorageVirtualMachinesRequestPrivate;

class QTAWSFSX_EXPORT DescribeStorageVirtualMachinesRequest : public FSxRequest {

public:
    DescribeStorageVirtualMachinesRequest(const DescribeStorageVirtualMachinesRequest &other);
    DescribeStorageVirtualMachinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorageVirtualMachinesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

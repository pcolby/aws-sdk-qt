// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEPARAMETERSREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeParametersRequestPrivate;

class QTAWSMEMORYDB_EXPORT DescribeParametersRequest : public MemoryDbRequest {

public:
    DescribeParametersRequest(const DescribeParametersRequest &other);
    DescribeParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeParametersRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif

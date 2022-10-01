// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESREQUEST_H
#define QTAWS_DESCRIBEVOLUMESREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeVolumesRequestPrivate;

class QTAWSFSX_EXPORT DescribeVolumesRequest : public FSxRequest {

public:
    DescribeVolumesRequest(const DescribeVolumesRequest &other);
    DescribeVolumesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

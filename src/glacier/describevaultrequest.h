// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVAULTREQUEST_H
#define QTAWS_DESCRIBEVAULTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class DescribeVaultRequestPrivate;

class QTAWSGLACIER_EXPORT DescribeVaultRequest : public GlacierRequest {

public:
    DescribeVaultRequest(const DescribeVaultRequest &other);
    DescribeVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif

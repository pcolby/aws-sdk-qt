// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMKEYSTORESREQUEST_H
#define QTAWS_DESCRIBECUSTOMKEYSTORESREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DescribeCustomKeyStoresRequestPrivate;

class QTAWSKMS_EXPORT DescribeCustomKeyStoresRequest : public KmsRequest {

public:
    DescribeCustomKeyStoresRequest(const DescribeCustomKeyStoresRequest &other);
    DescribeCustomKeyStoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomKeyStoresRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

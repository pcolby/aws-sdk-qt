// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYREQUEST_H
#define QTAWS_DESCRIBEKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DescribeKeyRequestPrivate;

class QTAWSKMS_EXPORT DescribeKeyRequest : public KmsRequest {

public:
    DescribeKeyRequest(const DescribeKeyRequest &other);
    DescribeKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

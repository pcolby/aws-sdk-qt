// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONLOAREQUEST_H
#define QTAWS_DESCRIBECONNECTIONLOAREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionLoaRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeConnectionLoaRequest : public DirectConnectRequest {

public:
    DescribeConnectionLoaRequest(const DescribeConnectionLoaRequest &other);
    DescribeConnectionLoaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionLoaRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

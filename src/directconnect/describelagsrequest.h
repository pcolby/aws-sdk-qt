// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAGSREQUEST_H
#define QTAWS_DESCRIBELAGSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLagsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeLagsRequest : public DirectConnectRequest {

public:
    DescribeLagsRequest(const DescribeLagsRequest &other);
    DescribeLagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLagsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

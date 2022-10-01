// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVCENTERCLIENTSREQUEST_H
#define QTAWS_DESCRIBEVCENTERCLIENTSREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeVcenterClientsRequestPrivate;

class QTAWSMGN_EXPORT DescribeVcenterClientsRequest : public MgnRequest {

public:
    DescribeVcenterClientsRequest(const DescribeVcenterClientsRequest &other);
    DescribeVcenterClientsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVcenterClientsRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

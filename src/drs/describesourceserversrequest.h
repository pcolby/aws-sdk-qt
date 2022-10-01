// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCESERVERSREQUEST_H
#define QTAWS_DESCRIBESOURCESERVERSREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeSourceServersRequestPrivate;

class QTAWSDRS_EXPORT DescribeSourceServersRequest : public DrsRequest {

public:
    DescribeSourceServersRequest(const DescribeSourceServersRequest &other);
    DescribeSourceServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSourceServersRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

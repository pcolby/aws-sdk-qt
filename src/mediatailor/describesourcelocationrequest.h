// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCELOCATIONREQUEST_H
#define QTAWS_DESCRIBESOURCELOCATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeSourceLocationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DescribeSourceLocationRequest : public MediaTailorRequest {

public:
    DescribeSourceLocationRequest(const DescribeSourceLocationRequest &other);
    DescribeSourceLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

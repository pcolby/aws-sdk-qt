// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKCAPACITYREQUEST_H
#define QTAWS_CHECKCAPACITYREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class CheckCapacityRequestPrivate;

class QTAWSWAFV2_EXPORT CheckCapacityRequest : public Wafv2Request {

public:
    CheckCapacityRequest(const CheckCapacityRequest &other);
    CheckCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckCapacityRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

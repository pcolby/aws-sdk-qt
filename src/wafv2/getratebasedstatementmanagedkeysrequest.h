// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSREQUEST_H
#define QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetRateBasedStatementManagedKeysRequestPrivate;

class QTAWSWAFV2_EXPORT GetRateBasedStatementManagedKeysRequest : public Wafv2Request {

public:
    GetRateBasedStatementManagedKeysRequest(const GetRateBasedStatementManagedKeysRequest &other);
    GetRateBasedStatementManagedKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRateBasedStatementManagedKeysRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

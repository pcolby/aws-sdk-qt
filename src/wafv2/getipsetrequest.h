// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETREQUEST_H
#define QTAWS_GETIPSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetIPSetRequestPrivate;

class QTAWSWAFV2_EXPORT GetIPSetRequest : public Wafv2Request {

public:
    GetIPSetRequest(const GetIPSetRequest &other);
    GetIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIPSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

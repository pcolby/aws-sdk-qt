// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETREQUEST_H
#define QTAWS_GETIPSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetIPSetRequestPrivate;

class QTAWSWAF_EXPORT GetIPSetRequest : public WafRequest {

public:
    GetIPSetRequest(const GetIPSetRequest &other);
    GetIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIPSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

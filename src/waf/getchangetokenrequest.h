// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENREQUEST_H
#define QTAWS_GETCHANGETOKENREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenRequestPrivate;

class QTAWSWAF_EXPORT GetChangeTokenRequest : public WafRequest {

public:
    GetChangeTokenRequest(const GetChangeTokenRequest &other);
    GetChangeTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

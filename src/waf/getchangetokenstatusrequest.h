// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSREQUEST_H
#define QTAWS_GETCHANGETOKENSTATUSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenStatusRequestPrivate;

class QTAWSWAF_EXPORT GetChangeTokenStatusRequest : public WafRequest {

public:
    GetChangeTokenStatusRequest(const GetChangeTokenStatusRequest &other);
    GetChangeTokenStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenStatusRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

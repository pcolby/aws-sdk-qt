// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSREQUEST_H
#define QTAWS_GETCHANGETOKENSTATUSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenStatusRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetChangeTokenStatusRequest : public WafRegionalRequest {

public:
    GetChangeTokenStatusRequest(const GetChangeTokenStatusRequest &other);
    GetChangeTokenStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenStatusRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

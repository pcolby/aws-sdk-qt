// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENREQUEST_H
#define QTAWS_GETCHANGETOKENREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetChangeTokenRequest : public WafRegionalRequest {

public:
    GetChangeTokenRequest(const GetChangeTokenRequest &other);
    GetChangeTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

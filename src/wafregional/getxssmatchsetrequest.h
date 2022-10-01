// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETXSSMATCHSETREQUEST_H
#define QTAWS_GETXSSMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetXssMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetXssMatchSetRequest : public WafRegionalRequest {

public:
    GetXssMatchSetRequest(const GetXssMatchSetRequest &other);
    GetXssMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

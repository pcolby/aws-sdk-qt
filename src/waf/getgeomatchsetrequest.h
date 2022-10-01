// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOMATCHSETREQUEST_H
#define QTAWS_GETGEOMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetGeoMatchSetRequestPrivate;

class QTAWSWAF_EXPORT GetGeoMatchSetRequest : public WafRequest {

public:
    GetGeoMatchSetRequest(const GetGeoMatchSetRequest &other);
    GetGeoMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeoMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

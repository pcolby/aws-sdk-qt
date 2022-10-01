// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOMATCHSETREQUEST_H
#define QTAWS_UPDATEGEOMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateGeoMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateGeoMatchSetRequest : public WafRegionalRequest {

public:
    UpdateGeoMatchSetRequest(const UpdateGeoMatchSetRequest &other);
    UpdateGeoMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGeoMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

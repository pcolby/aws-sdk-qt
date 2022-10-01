// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOMATCHSETREQUEST_H
#define QTAWS_CREATEGEOMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateGeoMatchSetRequestPrivate;

class QTAWSWAF_EXPORT CreateGeoMatchSetRequest : public WafRequest {

public:
    CreateGeoMatchSetRequest(const CreateGeoMatchSetRequest &other);
    CreateGeoMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGeoMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

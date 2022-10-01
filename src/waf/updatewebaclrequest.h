// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLREQUEST_H
#define QTAWS_UPDATEWEBACLREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateWebACLRequestPrivate;

class QTAWSWAF_EXPORT UpdateWebACLRequest : public WafRequest {

public:
    UpdateWebACLRequest(const UpdateWebACLRequest &other);
    UpdateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWebACLRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

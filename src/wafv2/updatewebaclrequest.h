// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBACLREQUEST_H
#define QTAWS_UPDATEWEBACLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class UpdateWebACLRequestPrivate;

class QTAWSWAFV2_EXPORT UpdateWebACLRequest : public Wafv2Request {

public:
    UpdateWebACLRequest(const UpdateWebACLRequest &other);
    UpdateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

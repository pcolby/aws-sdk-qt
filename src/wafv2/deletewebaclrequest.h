// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBACLREQUEST_H
#define QTAWS_DELETEWEBACLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DeleteWebACLRequestPrivate;

class QTAWSWAFV2_EXPORT DeleteWebACLRequest : public Wafv2Request {

public:
    DeleteWebACLRequest(const DeleteWebACLRequest &other);
    DeleteWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

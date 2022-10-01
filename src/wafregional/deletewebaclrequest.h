// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBACLREQUEST_H
#define QTAWS_DELETEWEBACLREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteWebACLRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteWebACLRequest : public WafRegionalRequest {

public:
    DeleteWebACLRequest(const DeleteWebACLRequest &other);
    DeleteWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

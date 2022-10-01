// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLREQUEST_H
#define QTAWS_CREATEWEBACLREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateWebACLRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT CreateWebACLRequest : public WafRegionalRequest {

public:
    CreateWebACLRequest(const CreateWebACLRequest &other);
    CreateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

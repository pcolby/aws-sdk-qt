// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLREQUEST_H
#define QTAWS_CREATEWEBACLREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateWebACLRequestPrivate;

class QTAWSWAF_EXPORT CreateWebACLRequest : public WafRequest {

public:
    CreateWebACLRequest(const CreateWebACLRequest &other);
    CreateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebACLRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

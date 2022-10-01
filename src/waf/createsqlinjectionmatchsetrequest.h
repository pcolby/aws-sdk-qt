// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_H
#define QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateSqlInjectionMatchSetRequestPrivate;

class QTAWSWAF_EXPORT CreateSqlInjectionMatchSetRequest : public WafRequest {

public:
    CreateSqlInjectionMatchSetRequest(const CreateSqlInjectionMatchSetRequest &other);
    CreateSqlInjectionMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSqlInjectionMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

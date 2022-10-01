// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_H
#define QTAWS_CREATESQLINJECTIONMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateSqlInjectionMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT CreateSqlInjectionMatchSetRequest : public WafRegionalRequest {

public:
    CreateSqlInjectionMatchSetRequest(const CreateSqlInjectionMatchSetRequest &other);
    CreateSqlInjectionMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSqlInjectionMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

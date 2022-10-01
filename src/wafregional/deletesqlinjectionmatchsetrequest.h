// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESQLINJECTIONMATCHSETREQUEST_H
#define QTAWS_DELETESQLINJECTIONMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteSqlInjectionMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteSqlInjectionMatchSetRequest : public WafRegionalRequest {

public:
    DeleteSqlInjectionMatchSetRequest(const DeleteSqlInjectionMatchSetRequest &other);
    DeleteSqlInjectionMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSqlInjectionMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESQLINJECTIONMATCHSETREQUEST_H
#define QTAWS_UPDATESQLINJECTIONMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateSqlInjectionMatchSetRequestPrivate;

class QTAWSWAF_EXPORT UpdateSqlInjectionMatchSetRequest : public WafRequest {

public:
    UpdateSqlInjectionMatchSetRequest(const UpdateSqlInjectionMatchSetRequest &other);
    UpdateSqlInjectionMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSqlInjectionMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

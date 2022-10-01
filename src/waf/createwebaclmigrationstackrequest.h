// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLMIGRATIONSTACKREQUEST_H
#define QTAWS_CREATEWEBACLMIGRATIONSTACKREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateWebACLMigrationStackRequestPrivate;

class QTAWSWAF_EXPORT CreateWebACLMigrationStackRequest : public WafRequest {

public:
    CreateWebACLMigrationStackRequest(const CreateWebACLMigrationStackRequest &other);
    CreateWebACLMigrationStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebACLMigrationStackRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

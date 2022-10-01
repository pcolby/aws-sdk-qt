// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBACLMIGRATIONSTACKRESPONSE_H
#define QTAWS_CREATEWEBACLMIGRATIONSTACKRESPONSE_H

#include "wafresponse.h"
#include "createwebaclmigrationstackrequest.h"

namespace QtAws {
namespace Waf {

class CreateWebACLMigrationStackResponsePrivate;

class QTAWSWAF_EXPORT CreateWebACLMigrationStackResponse : public WafResponse {
    Q_OBJECT

public:
    CreateWebACLMigrationStackResponse(const CreateWebACLMigrationStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWebACLMigrationStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebACLMigrationStackResponse)
    Q_DISABLE_COPY(CreateWebACLMigrationStackResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

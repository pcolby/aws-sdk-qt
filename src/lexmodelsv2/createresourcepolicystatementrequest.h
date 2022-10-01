// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYSTATEMENTREQUEST_H
#define QTAWS_CREATERESOURCEPOLICYSTATEMENTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyStatementRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateResourcePolicyStatementRequest : public LexModelsV2Request {

public:
    CreateResourcePolicyStatementRequest(const CreateResourcePolicyStatementRequest &other);
    CreateResourcePolicyStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourcePolicyStatementRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

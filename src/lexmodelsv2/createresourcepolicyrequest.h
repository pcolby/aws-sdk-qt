// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYREQUEST_H
#define QTAWS_CREATERESOURCEPOLICYREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateResourcePolicyRequest : public LexModelsV2Request {

public:
    CreateResourcePolicyRequest(const CreateResourcePolicyRequest &other);
    CreateResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

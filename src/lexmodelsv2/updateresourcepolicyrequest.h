// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEPOLICYREQUEST_H
#define QTAWS_UPDATERESOURCEPOLICYREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateResourcePolicyRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateResourcePolicyRequest : public LexModelsV2Request {

public:
    UpdateResourcePolicyRequest(const UpdateResourcePolicyRequest &other);
    UpdateResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

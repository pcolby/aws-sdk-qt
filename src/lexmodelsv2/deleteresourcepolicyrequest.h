// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYREQUEST_H
#define QTAWS_DELETERESOURCEPOLICYREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteResourcePolicyRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteResourcePolicyRequest : public LexModelsV2Request {

public:
    DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other);
    DeleteResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

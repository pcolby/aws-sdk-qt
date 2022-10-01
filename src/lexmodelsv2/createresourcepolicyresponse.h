// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYRESPONSE_H
#define QTAWS_CREATERESOURCEPOLICYRESPONSE_H

#include "lexmodelsv2response.h"
#include "createresourcepolicyrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateResourcePolicyResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateResourcePolicyResponse(const CreateResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourcePolicyResponse)
    Q_DISABLE_COPY(CreateResourcePolicyResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

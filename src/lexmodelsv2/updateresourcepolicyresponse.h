// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEPOLICYRESPONSE_H
#define QTAWS_UPDATERESOURCEPOLICYRESPONSE_H

#include "lexmodelsv2response.h"
#include "updateresourcepolicyrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateResourcePolicyResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateResourcePolicyResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateResourcePolicyResponse(const UpdateResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourcePolicyResponse)
    Q_DISABLE_COPY(UpdateResourcePolicyResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

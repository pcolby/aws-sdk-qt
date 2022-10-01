// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYSTATEMENTRESPONSE_H
#define QTAWS_DELETERESOURCEPOLICYSTATEMENTRESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteresourcepolicystatementrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteResourcePolicyStatementResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteResourcePolicyStatementResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteResourcePolicyStatementResponse(const DeleteResourcePolicyStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourcePolicyStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcePolicyStatementResponse)
    Q_DISABLE_COPY(DeleteResourcePolicyStatementResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

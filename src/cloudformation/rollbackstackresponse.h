// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKSTACKRESPONSE_H
#define QTAWS_ROLLBACKSTACKRESPONSE_H

#include "cloudformationresponse.h"
#include "rollbackstackrequest.h"

namespace QtAws {
namespace CloudFormation {

class RollbackStackResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT RollbackStackResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    RollbackStackResponse(const RollbackStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RollbackStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RollbackStackResponse)
    Q_DISABLE_COPY(RollbackStackResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

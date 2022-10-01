// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEUPDATEROLLBACKRESPONSE_H
#define QTAWS_CONTINUEUPDATEROLLBACKRESPONSE_H

#include "cloudformationresponse.h"
#include "continueupdaterollbackrequest.h"

namespace QtAws {
namespace CloudFormation {

class ContinueUpdateRollbackResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ContinueUpdateRollbackResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ContinueUpdateRollbackResponse(const ContinueUpdateRollbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ContinueUpdateRollbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ContinueUpdateRollbackResponse)
    Q_DISABLE_COPY(ContinueUpdateRollbackResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

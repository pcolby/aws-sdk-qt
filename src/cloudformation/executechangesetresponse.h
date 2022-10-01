// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECHANGESETRESPONSE_H
#define QTAWS_EXECUTECHANGESETRESPONSE_H

#include "cloudformationresponse.h"
#include "executechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class ExecuteChangeSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ExecuteChangeSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ExecuteChangeSetResponse(const ExecuteChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteChangeSetResponse)
    Q_DISABLE_COPY(ExecuteChangeSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

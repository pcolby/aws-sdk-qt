// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELUPDATESTACKRESPONSE_H
#define QTAWS_CANCELUPDATESTACKRESPONSE_H

#include "cloudformationresponse.h"
#include "cancelupdatestackrequest.h"

namespace QtAws {
namespace CloudFormation {

class CancelUpdateStackResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT CancelUpdateStackResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    CancelUpdateStackResponse(const CancelUpdateStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelUpdateStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelUpdateStackResponse)
    Q_DISABLE_COPY(CancelUpdateStackResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

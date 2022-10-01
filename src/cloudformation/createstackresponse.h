// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKRESPONSE_H
#define QTAWS_CREATESTACKRESPONSE_H

#include "cloudformationresponse.h"
#include "createstackrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateStackResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    CreateStackResponse(const CreateStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackResponse)
    Q_DISABLE_COPY(CreateStackResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

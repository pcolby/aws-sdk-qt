// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKSETRESPONSE_H
#define QTAWS_CREATESTACKSETRESPONSE_H

#include "cloudformationresponse.h"
#include "createstacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateStackSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    CreateStackSetResponse(const CreateStackSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStackSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackSetResponse)
    Q_DISABLE_COPY(CreateStackSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

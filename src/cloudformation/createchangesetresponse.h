// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETRESPONSE_H
#define QTAWS_CREATECHANGESETRESPONSE_H

#include "cloudformationresponse.h"
#include "createchangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateChangeSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateChangeSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    CreateChangeSetResponse(const CreateChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChangeSetResponse)
    Q_DISABLE_COPY(CreateChangeSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

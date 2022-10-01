// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKINSTANCESRESPONSE_H
#define QTAWS_CREATESTACKINSTANCESRESPONSE_H

#include "cloudformationresponse.h"
#include "createstackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackInstancesResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT CreateStackInstancesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    CreateStackInstancesResponse(const CreateStackInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStackInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackInstancesResponse)
    Q_DISABLE_COPY(CreateStackInstancesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

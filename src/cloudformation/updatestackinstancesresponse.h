// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKINSTANCESRESPONSE_H
#define QTAWS_UPDATESTACKINSTANCESRESPONSE_H

#include "cloudformationresponse.h"
#include "updatestackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackInstancesResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateStackInstancesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    UpdateStackInstancesResponse(const UpdateStackInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStackInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackInstancesResponse)
    Q_DISABLE_COPY(UpdateStackInstancesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKINSTANCESRESPONSE_H
#define QTAWS_DELETESTACKINSTANCESRESPONSE_H

#include "cloudformationresponse.h"
#include "deletestackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackInstancesResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DeleteStackInstancesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DeleteStackInstancesResponse(const DeleteStackInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStackInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStackInstancesResponse)
    Q_DISABLE_COPY(DeleteStackInstancesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

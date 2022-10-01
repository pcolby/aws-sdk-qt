// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESRESPONSE_H
#define QTAWS_LISTSTACKINSTANCESRESPONSE_H

#include "cloudformationresponse.h"
#include "liststackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackInstancesResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackInstancesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStackInstancesResponse(const ListStackInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackInstancesResponse)
    Q_DISABLE_COPY(ListStackInstancesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

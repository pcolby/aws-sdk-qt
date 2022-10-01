// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONRESULTSRESPONSE_H
#define QTAWS_LISTSTACKSETOPERATIONRESULTSRESPONSE_H

#include "cloudformationresponse.h"
#include "liststacksetoperationresultsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationResultsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackSetOperationResultsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStackSetOperationResultsResponse(const ListStackSetOperationResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackSetOperationResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackSetOperationResultsResponse)
    Q_DISABLE_COPY(ListStackSetOperationResultsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

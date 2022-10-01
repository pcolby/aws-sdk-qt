// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONSRESPONSE_H
#define QTAWS_LISTSTACKSETOPERATIONSRESPONSE_H

#include "cloudformationresponse.h"
#include "liststacksetoperationsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackSetOperationsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStackSetOperationsResponse(const ListStackSetOperationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackSetOperationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackSetOperationsResponse)
    Q_DISABLE_COPY(ListStackSetOperationsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

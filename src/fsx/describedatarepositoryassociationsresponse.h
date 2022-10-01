// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSRESPONSE_H

#include "fsxresponse.h"
#include "describedatarepositoryassociationsrequest.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryAssociationsResponsePrivate;

class QTAWSFSX_EXPORT DescribeDataRepositoryAssociationsResponse : public FSxResponse {
    Q_OBJECT

public:
    DescribeDataRepositoryAssociationsResponse(const DescribeDataRepositoryAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataRepositoryAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataRepositoryAssociationsResponse)
    Q_DISABLE_COPY(DescribeDataRepositoryAssociationsResponse)

};

} // namespace FSx
} // namespace QtAws

#endif

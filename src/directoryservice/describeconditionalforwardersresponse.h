// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONDITIONALFORWARDERSRESPONSE_H
#define QTAWS_DESCRIBECONDITIONALFORWARDERSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describeconditionalforwardersrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeConditionalForwardersResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeConditionalForwardersResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeConditionalForwardersResponse(const DescribeConditionalForwardersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConditionalForwardersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConditionalForwardersResponse)
    Q_DISABLE_COPY(DescribeConditionalForwardersResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTOPICSRESPONSE_H
#define QTAWS_DESCRIBEEVENTTOPICSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describeeventtopicsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeEventTopicsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeEventTopicsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeEventTopicsResponse(const DescribeEventTopicsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventTopicsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventTopicsResponse)
    Q_DISABLE_COPY(DescribeEventTopicsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESHAREDDIRECTORIESRESPONSE_H
#define QTAWS_DESCRIBESHAREDDIRECTORIESRESPONSE_H

#include "directoryserviceresponse.h"
#include "describeshareddirectoriesrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSharedDirectoriesResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeSharedDirectoriesResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeSharedDirectoriesResponse(const DescribeSharedDirectoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSharedDirectoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSharedDirectoriesResponse)
    Q_DISABLE_COPY(DescribeSharedDirectoriesResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

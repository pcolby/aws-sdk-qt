// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORIESRESPONSE_H
#define QTAWS_DESCRIBEDIRECTORIESRESPONSE_H

#include "directoryserviceresponse.h"
#include "describedirectoriesrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDirectoriesResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeDirectoriesResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeDirectoriesResponse(const DescribeDirectoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDirectoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectoriesResponse)
    Q_DISABLE_COPY(DescribeDirectoriesResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

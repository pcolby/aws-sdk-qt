// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMSRESPONSE_H
#define QTAWS_DESCRIBEFILESYSTEMSRESPONSE_H

#include "efsresponse.h"
#include "describefilesystemsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemsResponsePrivate;

class QTAWSEFS_EXPORT DescribeFileSystemsResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeFileSystemsResponse(const DescribeFileSystemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFileSystemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemsResponse)
    Q_DISABLE_COPY(DescribeFileSystemsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif

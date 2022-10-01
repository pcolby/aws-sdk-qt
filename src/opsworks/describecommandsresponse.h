// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMANDSRESPONSE_H
#define QTAWS_DESCRIBECOMMANDSRESPONSE_H

#include "opsworksresponse.h"
#include "describecommandsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeCommandsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeCommandsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeCommandsResponse(const DescribeCommandsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCommandsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCommandsResponse)
    Q_DISABLE_COPY(DescribeCommandsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

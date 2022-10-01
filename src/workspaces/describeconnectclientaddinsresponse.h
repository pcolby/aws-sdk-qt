// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTCLIENTADDINSRESPONSE_H
#define QTAWS_DESCRIBECONNECTCLIENTADDINSRESPONSE_H

#include "workspacesresponse.h"
#include "describeconnectclientaddinsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectClientAddInsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeConnectClientAddInsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeConnectClientAddInsResponse(const DescribeConnectClientAddInsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectClientAddInsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectClientAddInsResponse)
    Q_DISABLE_COPY(DescribeConnectClientAddInsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

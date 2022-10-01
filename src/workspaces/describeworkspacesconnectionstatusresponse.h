// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspacesconnectionstatusrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesConnectionStatusResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspacesConnectionStatusResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspacesConnectionStatusResponse(const DescribeWorkspacesConnectionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspacesConnectionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspacesConnectionStatusResponse)
    Q_DISABLE_COPY(DescribeWorkspacesConnectionStatusResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

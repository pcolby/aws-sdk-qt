// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspacesResponse(const DescribeWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspacesResponse)
    Q_DISABLE_COPY(DescribeWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

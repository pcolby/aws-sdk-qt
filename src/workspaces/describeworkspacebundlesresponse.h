// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEBUNDLESRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACEBUNDLESRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspacebundlesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceBundlesResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceBundlesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspaceBundlesResponse(const DescribeWorkspaceBundlesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceBundlesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceBundlesResponse)
    Q_DISABLE_COPY(DescribeWorkspaceBundlesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

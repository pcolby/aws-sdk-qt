// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTMODIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTMODIFICATIONSRESPONSE_H

#include "workspacesresponse.h"
#include "describeaccountmodificationsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeAccountModificationsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeAccountModificationsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeAccountModificationsResponse(const DescribeAccountModificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountModificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountModificationsResponse)
    Q_DISABLE_COPY(DescribeAccountModificationsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

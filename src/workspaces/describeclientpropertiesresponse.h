// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTPROPERTIESRESPONSE_H
#define QTAWS_DESCRIBECLIENTPROPERTIESRESPONSE_H

#include "workspacesresponse.h"
#include "describeclientpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientPropertiesResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeClientPropertiesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeClientPropertiesResponse(const DescribeClientPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientPropertiesResponse)
    Q_DISABLE_COPY(DescribeClientPropertiesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

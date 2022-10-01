// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTBRANDINGRESPONSE_H
#define QTAWS_DESCRIBECLIENTBRANDINGRESPONSE_H

#include "workspacesresponse.h"
#include "describeclientbrandingrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientBrandingResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeClientBrandingResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeClientBrandingResponse(const DescribeClientBrandingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientBrandingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientBrandingResponse)
    Q_DISABLE_COPY(DescribeClientBrandingResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

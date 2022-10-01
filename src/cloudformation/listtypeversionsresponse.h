// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEVERSIONSRESPONSE_H
#define QTAWS_LISTTYPEVERSIONSRESPONSE_H

#include "cloudformationresponse.h"
#include "listtypeversionsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeVersionsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListTypeVersionsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListTypeVersionsResponse(const ListTypeVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTypeVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypeVersionsResponse)
    Q_DISABLE_COPY(ListTypeVersionsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

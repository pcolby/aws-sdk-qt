// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSRESPONSE_H
#define QTAWS_LISTSTACKSRESPONSE_H

#include "cloudformationresponse.h"
#include "liststacksrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStacksResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStacksResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStacksResponse(const ListStacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStacksResponse)
    Q_DISABLE_COPY(ListStacksResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

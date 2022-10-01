// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETSRESPONSE_H
#define QTAWS_LISTSTACKSETSRESPONSE_H

#include "cloudformationresponse.h"
#include "liststacksetsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackSetsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStackSetsResponse(const ListStackSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackSetsResponse)
    Q_DISABLE_COPY(ListStackSetsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

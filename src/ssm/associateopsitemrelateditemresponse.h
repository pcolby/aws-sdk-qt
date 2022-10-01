// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEOPSITEMRELATEDITEMRESPONSE_H
#define QTAWS_ASSOCIATEOPSITEMRELATEDITEMRESPONSE_H

#include "ssmresponse.h"
#include "associateopsitemrelateditemrequest.h"

namespace QtAws {
namespace Ssm {

class AssociateOpsItemRelatedItemResponsePrivate;

class QTAWSSSM_EXPORT AssociateOpsItemRelatedItemResponse : public SsmResponse {
    Q_OBJECT

public:
    AssociateOpsItemRelatedItemResponse(const AssociateOpsItemRelatedItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateOpsItemRelatedItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateOpsItemRelatedItemResponse)
    Q_DISABLE_COPY(AssociateOpsItemRelatedItemResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

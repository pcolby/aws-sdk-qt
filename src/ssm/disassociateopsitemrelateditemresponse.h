// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEOPSITEMRELATEDITEMRESPONSE_H
#define QTAWS_DISASSOCIATEOPSITEMRELATEDITEMRESPONSE_H

#include "ssmresponse.h"
#include "disassociateopsitemrelateditemrequest.h"

namespace QtAws {
namespace Ssm {

class DisassociateOpsItemRelatedItemResponsePrivate;

class QTAWSSSM_EXPORT DisassociateOpsItemRelatedItemResponse : public SsmResponse {
    Q_OBJECT

public:
    DisassociateOpsItemRelatedItemResponse(const DisassociateOpsItemRelatedItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateOpsItemRelatedItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateOpsItemRelatedItemResponse)
    Q_DISABLE_COPY(DisassociateOpsItemRelatedItemResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSITEMRESPONSE_H
#define QTAWS_CREATEOPSITEMRESPONSE_H

#include "ssmresponse.h"
#include "createopsitemrequest.h"

namespace QtAws {
namespace Ssm {

class CreateOpsItemResponsePrivate;

class QTAWSSSM_EXPORT CreateOpsItemResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateOpsItemResponse(const CreateOpsItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOpsItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOpsItemResponse)
    Q_DISABLE_COPY(CreateOpsItemResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

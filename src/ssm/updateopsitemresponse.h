// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSITEMRESPONSE_H
#define QTAWS_UPDATEOPSITEMRESPONSE_H

#include "ssmresponse.h"
#include "updateopsitemrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsItemResponsePrivate;

class QTAWSSSM_EXPORT UpdateOpsItemResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateOpsItemResponse(const UpdateOpsItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOpsItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOpsItemResponse)
    Q_DISABLE_COPY(UpdateOpsItemResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

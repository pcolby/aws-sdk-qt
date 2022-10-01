// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSITEMRESPONSE_H
#define QTAWS_GETOPSITEMRESPONSE_H

#include "ssmresponse.h"
#include "getopsitemrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsItemResponsePrivate;

class QTAWSSSM_EXPORT GetOpsItemResponse : public SsmResponse {
    Q_OBJECT

public:
    GetOpsItemResponse(const GetOpsItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOpsItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpsItemResponse)
    Q_DISABLE_COPY(GetOpsItemResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

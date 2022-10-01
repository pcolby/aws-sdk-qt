// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYRESPONSE_H
#define QTAWS_GETINVENTORYRESPONSE_H

#include "ssmresponse.h"
#include "getinventoryrequest.h"

namespace QtAws {
namespace Ssm {

class GetInventoryResponsePrivate;

class QTAWSSSM_EXPORT GetInventoryResponse : public SsmResponse {
    Q_OBJECT

public:
    GetInventoryResponse(const GetInventoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInventoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInventoryResponse)
    Q_DISABLE_COPY(GetInventoryResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

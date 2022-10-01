// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVENTORYRESPONSE_H
#define QTAWS_PUTINVENTORYRESPONSE_H

#include "ssmresponse.h"
#include "putinventoryrequest.h"

namespace QtAws {
namespace Ssm {

class PutInventoryResponsePrivate;

class QTAWSSSM_EXPORT PutInventoryResponse : public SsmResponse {
    Q_OBJECT

public:
    PutInventoryResponse(const PutInventoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInventoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInventoryResponse)
    Q_DISABLE_COPY(PutInventoryResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

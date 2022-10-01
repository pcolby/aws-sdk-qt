// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVENTORYRESPONSE_H
#define QTAWS_DELETEINVENTORYRESPONSE_H

#include "ssmresponse.h"
#include "deleteinventoryrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteInventoryResponsePrivate;

class QTAWSSSM_EXPORT DeleteInventoryResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteInventoryResponse(const DeleteInventoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInventoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInventoryResponse)
    Q_DISABLE_COPY(DeleteInventoryResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

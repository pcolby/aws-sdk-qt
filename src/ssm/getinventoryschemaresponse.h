// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYSCHEMARESPONSE_H
#define QTAWS_GETINVENTORYSCHEMARESPONSE_H

#include "ssmresponse.h"
#include "getinventoryschemarequest.h"

namespace QtAws {
namespace Ssm {

class GetInventorySchemaResponsePrivate;

class QTAWSSSM_EXPORT GetInventorySchemaResponse : public SsmResponse {
    Q_OBJECT

public:
    GetInventorySchemaResponse(const GetInventorySchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInventorySchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInventorySchemaResponse)
    Q_DISABLE_COPY(GetInventorySchemaResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONINDEXESRESPONSE_H
#define QTAWS_GETPARTITIONINDEXESRESPONSE_H

#include "glueresponse.h"
#include "getpartitionindexesrequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionIndexesResponsePrivate;

class QTAWSGLUE_EXPORT GetPartitionIndexesResponse : public GlueResponse {
    Q_OBJECT

public:
    GetPartitionIndexesResponse(const GetPartitionIndexesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPartitionIndexesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPartitionIndexesResponse)
    Q_DISABLE_COPY(GetPartitionIndexesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

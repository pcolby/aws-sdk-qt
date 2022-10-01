// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONMETADATARESPONSE_H
#define QTAWS_GETUNFILTEREDPARTITIONMETADATARESPONSE_H

#include "glueresponse.h"
#include "getunfilteredpartitionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionMetadataResponsePrivate;

class QTAWSGLUE_EXPORT GetUnfilteredPartitionMetadataResponse : public GlueResponse {
    Q_OBJECT

public:
    GetUnfilteredPartitionMetadataResponse(const GetUnfilteredPartitionMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUnfilteredPartitionMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUnfilteredPartitionMetadataResponse)
    Q_DISABLE_COPY(GetUnfilteredPartitionMetadataResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

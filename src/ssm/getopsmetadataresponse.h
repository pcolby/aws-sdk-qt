// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSMETADATARESPONSE_H
#define QTAWS_GETOPSMETADATARESPONSE_H

#include "ssmresponse.h"
#include "getopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsMetadataResponsePrivate;

class QTAWSSSM_EXPORT GetOpsMetadataResponse : public SsmResponse {
    Q_OBJECT

public:
    GetOpsMetadataResponse(const GetOpsMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOpsMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpsMetadataResponse)
    Q_DISABLE_COPY(GetOpsMetadataResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPSMETADATARESPONSE_H
#define QTAWS_DELETEOPSMETADATARESPONSE_H

#include "ssmresponse.h"
#include "deleteopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class DeleteOpsMetadataResponsePrivate;

class QTAWSSSM_EXPORT DeleteOpsMetadataResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteOpsMetadataResponse(const DeleteOpsMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOpsMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOpsMetadataResponse)
    Q_DISABLE_COPY(DeleteOpsMetadataResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

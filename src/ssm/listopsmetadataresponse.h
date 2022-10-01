// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSMETADATARESPONSE_H
#define QTAWS_LISTOPSMETADATARESPONSE_H

#include "ssmresponse.h"
#include "listopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsMetadataResponsePrivate;

class QTAWSSSM_EXPORT ListOpsMetadataResponse : public SsmResponse {
    Q_OBJECT

public:
    ListOpsMetadataResponse(const ListOpsMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOpsMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpsMetadataResponse)
    Q_DISABLE_COPY(ListOpsMetadataResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

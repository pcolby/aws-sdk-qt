// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRIGGERSRESPONSE_H
#define QTAWS_BATCHGETTRIGGERSRESPONSE_H

#include "glueresponse.h"
#include "batchgettriggersrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetTriggersResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetTriggersResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetTriggersResponse(const BatchGetTriggersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetTriggersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetTriggersResponse)
    Q_DISABLE_COPY(BatchGetTriggersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

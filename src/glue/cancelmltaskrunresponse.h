// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMLTASKRUNRESPONSE_H
#define QTAWS_CANCELMLTASKRUNRESPONSE_H

#include "glueresponse.h"
#include "cancelmltaskrunrequest.h"

namespace QtAws {
namespace Glue {

class CancelMLTaskRunResponsePrivate;

class QTAWSGLUE_EXPORT CancelMLTaskRunResponse : public GlueResponse {
    Q_OBJECT

public:
    CancelMLTaskRunResponse(const CancelMLTaskRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelMLTaskRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMLTaskRunResponse)
    Q_DISABLE_COPY(CancelMLTaskRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

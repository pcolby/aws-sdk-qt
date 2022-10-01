// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERJOBDEFINITIONRESPONSE_H
#define QTAWS_DEREGISTERJOBDEFINITIONRESPONSE_H

#include "batchresponse.h"
#include "deregisterjobdefinitionrequest.h"

namespace QtAws {
namespace Batch {

class DeregisterJobDefinitionResponsePrivate;

class QTAWSBATCH_EXPORT DeregisterJobDefinitionResponse : public BatchResponse {
    Q_OBJECT

public:
    DeregisterJobDefinitionResponse(const DeregisterJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterJobDefinitionResponse)
    Q_DISABLE_COPY(DeregisterJobDefinitionResponse)

};

} // namespace Batch
} // namespace QtAws

#endif

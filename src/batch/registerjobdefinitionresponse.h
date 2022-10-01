// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERJOBDEFINITIONRESPONSE_H
#define QTAWS_REGISTERJOBDEFINITIONRESPONSE_H

#include "batchresponse.h"
#include "registerjobdefinitionrequest.h"

namespace QtAws {
namespace Batch {

class RegisterJobDefinitionResponsePrivate;

class QTAWSBATCH_EXPORT RegisterJobDefinitionResponse : public BatchResponse {
    Q_OBJECT

public:
    RegisterJobDefinitionResponse(const RegisterJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterJobDefinitionResponse)
    Q_DISABLE_COPY(RegisterJobDefinitionResponse)

};

} // namespace Batch
} // namespace QtAws

#endif

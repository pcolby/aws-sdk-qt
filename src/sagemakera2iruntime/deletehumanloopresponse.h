// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANLOOPRESPONSE_H
#define QTAWS_DELETEHUMANLOOPRESPONSE_H

#include "sagemakera2iruntimeresponse.h"
#include "deletehumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DeleteHumanLoopResponsePrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT DeleteHumanLoopResponse : public SageMakerA2IRuntimeResponse {
    Q_OBJECT

public:
    DeleteHumanLoopResponse(const DeleteHumanLoopRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHumanLoopRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHumanLoopResponse)
    Q_DISABLE_COPY(DeleteHumanLoopResponse)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif

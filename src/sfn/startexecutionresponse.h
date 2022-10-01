// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXECUTIONRESPONSE_H
#define QTAWS_STARTEXECUTIONRESPONSE_H

#include "sfnresponse.h"
#include "startexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class StartExecutionResponsePrivate;

class QTAWSSFN_EXPORT StartExecutionResponse : public SfnResponse {
    Q_OBJECT

public:
    StartExecutionResponse(const StartExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExecutionResponse)
    Q_DISABLE_COPY(StartExecutionResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif

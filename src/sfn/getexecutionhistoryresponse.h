// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXECUTIONHISTORYRESPONSE_H
#define QTAWS_GETEXECUTIONHISTORYRESPONSE_H

#include "sfnresponse.h"
#include "getexecutionhistoryrequest.h"

namespace QtAws {
namespace Sfn {

class GetExecutionHistoryResponsePrivate;

class QTAWSSFN_EXPORT GetExecutionHistoryResponse : public SfnResponse {
    Q_OBJECT

public:
    GetExecutionHistoryResponse(const GetExecutionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExecutionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExecutionHistoryResponse)
    Q_DISABLE_COPY(GetExecutionHistoryResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif

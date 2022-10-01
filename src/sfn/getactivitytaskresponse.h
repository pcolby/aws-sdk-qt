// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVITYTASKRESPONSE_H
#define QTAWS_GETACTIVITYTASKRESPONSE_H

#include "sfnresponse.h"
#include "getactivitytaskrequest.h"

namespace QtAws {
namespace Sfn {

class GetActivityTaskResponsePrivate;

class QTAWSSFN_EXPORT GetActivityTaskResponse : public SfnResponse {
    Q_OBJECT

public:
    GetActivityTaskResponse(const GetActivityTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetActivityTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActivityTaskResponse)
    Q_DISABLE_COPY(GetActivityTaskResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif

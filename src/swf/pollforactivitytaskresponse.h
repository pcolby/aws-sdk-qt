// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORACTIVITYTASKRESPONSE_H
#define QTAWS_POLLFORACTIVITYTASKRESPONSE_H

#include "swfresponse.h"
#include "pollforactivitytaskrequest.h"

namespace QtAws {
namespace Swf {

class PollForActivityTaskResponsePrivate;

class QTAWSSWF_EXPORT PollForActivityTaskResponse : public SwfResponse {
    Q_OBJECT

public:
    PollForActivityTaskResponse(const PollForActivityTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PollForActivityTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForActivityTaskResponse)
    Q_DISABLE_COPY(PollForActivityTaskResponse)

};

} // namespace Swf
} // namespace QtAws

#endif

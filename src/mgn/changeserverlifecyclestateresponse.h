// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGESERVERLIFECYCLESTATERESPONSE_H
#define QTAWS_CHANGESERVERLIFECYCLESTATERESPONSE_H

#include "mgnresponse.h"
#include "changeserverlifecyclestaterequest.h"

namespace QtAws {
namespace Mgn {

class ChangeServerLifeCycleStateResponsePrivate;

class QTAWSMGN_EXPORT ChangeServerLifeCycleStateResponse : public MgnResponse {
    Q_OBJECT

public:
    ChangeServerLifeCycleStateResponse(const ChangeServerLifeCycleStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChangeServerLifeCycleStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeServerLifeCycleStateResponse)
    Q_DISABLE_COPY(ChangeServerLifeCycleStateResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif

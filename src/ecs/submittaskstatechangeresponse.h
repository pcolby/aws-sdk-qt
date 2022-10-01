// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITTASKSTATECHANGERESPONSE_H
#define QTAWS_SUBMITTASKSTATECHANGERESPONSE_H

#include "ecsresponse.h"
#include "submittaskstatechangerequest.h"

namespace QtAws {
namespace Ecs {

class SubmitTaskStateChangeResponsePrivate;

class QTAWSECS_EXPORT SubmitTaskStateChangeResponse : public EcsResponse {
    Q_OBJECT

public:
    SubmitTaskStateChangeResponse(const SubmitTaskStateChangeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubmitTaskStateChangeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitTaskStateChangeResponse)
    Q_DISABLE_COPY(SubmitTaskStateChangeResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif

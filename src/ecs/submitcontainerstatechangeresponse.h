// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITCONTAINERSTATECHANGERESPONSE_H
#define QTAWS_SUBMITCONTAINERSTATECHANGERESPONSE_H

#include "ecsresponse.h"
#include "submitcontainerstatechangerequest.h"

namespace QtAws {
namespace Ecs {

class SubmitContainerStateChangeResponsePrivate;

class QTAWSECS_EXPORT SubmitContainerStateChangeResponse : public EcsResponse {
    Q_OBJECT

public:
    SubmitContainerStateChangeResponse(const SubmitContainerStateChangeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubmitContainerStateChangeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitContainerStateChangeResponse)
    Q_DISABLE_COPY(SubmitContainerStateChangeResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTATEMACHINERESPONSE_H
#define QTAWS_UPDATESTATEMACHINERESPONSE_H

#include "sfnresponse.h"
#include "updatestatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class UpdateStateMachineResponsePrivate;

class QTAWSSFN_EXPORT UpdateStateMachineResponse : public SfnResponse {
    Q_OBJECT

public:
    UpdateStateMachineResponse(const UpdateStateMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStateMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStateMachineResponse)
    Q_DISABLE_COPY(UpdateStateMachineResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif

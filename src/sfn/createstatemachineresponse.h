// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTATEMACHINERESPONSE_H
#define QTAWS_CREATESTATEMACHINERESPONSE_H

#include "sfnresponse.h"
#include "createstatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class CreateStateMachineResponsePrivate;

class QTAWSSFN_EXPORT CreateStateMachineResponse : public SfnResponse {
    Q_OBJECT

public:
    CreateStateMachineResponse(const CreateStateMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStateMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStateMachineResponse)
    Q_DISABLE_COPY(CreateStateMachineResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif

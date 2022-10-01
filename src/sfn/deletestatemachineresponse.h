// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTATEMACHINERESPONSE_H
#define QTAWS_DELETESTATEMACHINERESPONSE_H

#include "sfnresponse.h"
#include "deletestatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class DeleteStateMachineResponsePrivate;

class QTAWSSFN_EXPORT DeleteStateMachineResponse : public SfnResponse {
    Q_OBJECT

public:
    DeleteStateMachineResponse(const DeleteStateMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStateMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStateMachineResponse)
    Q_DISABLE_COPY(DeleteStateMachineResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif

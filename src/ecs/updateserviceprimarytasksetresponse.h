// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPRIMARYTASKSETRESPONSE_H
#define QTAWS_UPDATESERVICEPRIMARYTASKSETRESPONSE_H

#include "ecsresponse.h"
#include "updateserviceprimarytasksetrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateServicePrimaryTaskSetResponsePrivate;

class QTAWSECS_EXPORT UpdateServicePrimaryTaskSetResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateServicePrimaryTaskSetResponse(const UpdateServicePrimaryTaskSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServicePrimaryTaskSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServicePrimaryTaskSetResponse)
    Q_DISABLE_COPY(UpdateServicePrimaryTaskSetResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif

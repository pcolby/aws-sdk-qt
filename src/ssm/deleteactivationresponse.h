// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVATIONRESPONSE_H
#define QTAWS_DELETEACTIVATIONRESPONSE_H

#include "ssmresponse.h"
#include "deleteactivationrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteActivationResponsePrivate;

class QTAWSSSM_EXPORT DeleteActivationResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteActivationResponse(const DeleteActivationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteActivationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActivationResponse)
    Q_DISABLE_COPY(DeleteActivationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

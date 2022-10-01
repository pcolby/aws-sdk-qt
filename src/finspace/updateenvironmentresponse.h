// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTRESPONSE_H
#define QTAWS_UPDATEENVIRONMENTRESPONSE_H

#include "finspaceresponse.h"
#include "updateenvironmentrequest.h"

namespace QtAws {
namespace Finspace {

class UpdateEnvironmentResponsePrivate;

class QTAWSFINSPACE_EXPORT UpdateEnvironmentResponse : public FinspaceResponse {
    Q_OBJECT

public:
    UpdateEnvironmentResponse(const UpdateEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentResponse)
    Q_DISABLE_COPY(UpdateEnvironmentResponse)

};

} // namespace Finspace
} // namespace QtAws

#endif

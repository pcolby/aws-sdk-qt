// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTRESPONSE_H
#define QTAWS_CREATEACCESSPOINTRESPONSE_H

#include "efsresponse.h"
#include "createaccesspointrequest.h"

namespace QtAws {
namespace Efs {

class CreateAccessPointResponsePrivate;

class QTAWSEFS_EXPORT CreateAccessPointResponse : public EfsResponse {
    Q_OBJECT

public:
    CreateAccessPointResponse(const CreateAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPointResponse)
    Q_DISABLE_COPY(CreateAccessPointResponse)

};

} // namespace Efs
} // namespace QtAws

#endif

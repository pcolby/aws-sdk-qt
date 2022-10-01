// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUILDRESPONSE_H
#define QTAWS_CREATEBUILDRESPONSE_H

#include "gameliftresponse.h"
#include "createbuildrequest.h"

namespace QtAws {
namespace GameLift {

class CreateBuildResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateBuildResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateBuildResponse(const CreateBuildRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBuildRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBuildResponse)
    Q_DISABLE_COPY(CreateBuildResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif

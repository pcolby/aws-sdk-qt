// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDRESPONSE_H
#define QTAWS_DELETEBUILDRESPONSE_H

#include "gameliftresponse.h"
#include "deletebuildrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteBuildResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteBuildResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteBuildResponse(const DeleteBuildRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBuildRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBuildResponse)
    Q_DISABLE_COPY(DeleteBuildResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif

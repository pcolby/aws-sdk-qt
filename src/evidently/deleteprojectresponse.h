// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTRESPONSE_H
#define QTAWS_DELETEPROJECTRESPONSE_H

#include "evidentlyresponse.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteProjectResponsePrivate;

class QTAWSEVIDENTLY_EXPORT DeleteProjectResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    DeleteProjectResponse(const DeleteProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectResponse)
    Q_DISABLE_COPY(DeleteProjectResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTRESPONSE_H
#define QTAWS_DELETEPROJECTRESPONSE_H

#include "mobileresponse.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace Mobile {

class DeleteProjectResponsePrivate;

class QTAWSMOBILE_EXPORT DeleteProjectResponse : public MobileResponse {
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

} // namespace Mobile
} // namespace QtAws

#endif

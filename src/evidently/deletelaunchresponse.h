// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHRESPONSE_H
#define QTAWS_DELETELAUNCHRESPONSE_H

#include "evidentlyresponse.h"
#include "deletelaunchrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteLaunchResponsePrivate;

class QTAWSEVIDENTLY_EXPORT DeleteLaunchResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    DeleteLaunchResponse(const DeleteLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchResponse)
    Q_DISABLE_COPY(DeleteLaunchResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIVESOURCERESPONSE_H
#define QTAWS_DELETELIVESOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "deletelivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteLiveSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteLiveSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeleteLiveSourceResponse(const DeleteLiveSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLiveSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLiveSourceResponse)
    Q_DISABLE_COPY(DeleteLiveSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIVESOURCERESPONSE_H
#define QTAWS_UPDATELIVESOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "updatelivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateLiveSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT UpdateLiveSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    UpdateLiveSourceResponse(const UpdateLiveSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLiveSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLiveSourceResponse)
    Q_DISABLE_COPY(UpdateLiveSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

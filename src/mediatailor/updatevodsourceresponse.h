// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVODSOURCERESPONSE_H
#define QTAWS_UPDATEVODSOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "updatevodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateVodSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT UpdateVodSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    UpdateVodSourceResponse(const UpdateVodSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVodSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVodSourceResponse)
    Q_DISABLE_COPY(UpdateVodSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

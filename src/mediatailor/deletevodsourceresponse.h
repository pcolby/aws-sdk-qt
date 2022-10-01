// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVODSOURCERESPONSE_H
#define QTAWS_DELETEVODSOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "deletevodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteVodSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteVodSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeleteVodSourceResponse(const DeleteVodSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVodSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVodSourceResponse)
    Q_DISABLE_COPY(DeleteVodSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

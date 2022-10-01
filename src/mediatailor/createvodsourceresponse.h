// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVODSOURCERESPONSE_H
#define QTAWS_CREATEVODSOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "createvodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateVodSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT CreateVodSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    CreateVodSourceResponse(const CreateVodSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVodSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVodSourceResponse)
    Q_DISABLE_COPY(CreateVodSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

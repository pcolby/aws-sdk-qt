// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCELOCATIONRESPONSE_H
#define QTAWS_UPDATESOURCELOCATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "updatesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateSourceLocationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT UpdateSourceLocationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    UpdateSourceLocationResponse(const UpdateSourceLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSourceLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSourceLocationResponse)
    Q_DISABLE_COPY(UpdateSourceLocationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

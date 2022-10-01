// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCELOCATIONRESPONSE_H
#define QTAWS_DELETESOURCELOCATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "deletesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteSourceLocationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteSourceLocationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeleteSourceLocationResponse(const DeleteSourceLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSourceLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSourceLocationResponse)
    Q_DISABLE_COPY(DeleteSourceLocationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRAMRESPONSE_H
#define QTAWS_DELETEPROGRAMRESPONSE_H

#include "mediatailorresponse.h"
#include "deleteprogramrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteProgramResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteProgramResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeleteProgramResponse(const DeleteProgramRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProgramRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProgramResponse)
    Q_DISABLE_COPY(DeleteProgramResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

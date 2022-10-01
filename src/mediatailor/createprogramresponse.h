// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRAMRESPONSE_H
#define QTAWS_CREATEPROGRAMRESPONSE_H

#include "mediatailorresponse.h"
#include "createprogramrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateProgramResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT CreateProgramResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    CreateProgramResponse(const CreateProgramRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProgramRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProgramResponse)
    Q_DISABLE_COPY(CreateProgramResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

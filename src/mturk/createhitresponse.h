// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITRESPONSE_H
#define QTAWS_CREATEHITRESPONSE_H

#include "mturkresponse.h"
#include "createhitrequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITResponsePrivate;

class QTAWSMTURK_EXPORT CreateHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateHITResponse(const CreateHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITResponse)
    Q_DISABLE_COPY(CreateHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

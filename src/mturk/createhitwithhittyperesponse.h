// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITWITHHITTYPERESPONSE_H
#define QTAWS_CREATEHITWITHHITTYPERESPONSE_H

#include "mturkresponse.h"
#include "createhitwithhittyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITWithHITTypeResponsePrivate;

class QTAWSMTURK_EXPORT CreateHITWithHITTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateHITWithHITTypeResponse(const CreateHITWithHITTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHITWithHITTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITWithHITTypeResponse)
    Q_DISABLE_COPY(CreateHITWithHITTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

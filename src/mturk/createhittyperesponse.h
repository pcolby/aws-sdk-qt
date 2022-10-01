// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITTYPERESPONSE_H
#define QTAWS_CREATEHITTYPERESPONSE_H

#include "mturkresponse.h"
#include "createhittyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITTypeResponsePrivate;

class QTAWSMTURK_EXPORT CreateHITTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateHITTypeResponse(const CreateHITTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHITTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITTypeResponse)
    Q_DISABLE_COPY(CreateHITTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

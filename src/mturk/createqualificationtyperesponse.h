// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUALIFICATIONTYPERESPONSE_H
#define QTAWS_CREATEQUALIFICATIONTYPERESPONSE_H

#include "mturkresponse.h"
#include "createqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateQualificationTypeResponsePrivate;

class QTAWSMTURK_EXPORT CreateQualificationTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateQualificationTypeResponse(const CreateQualificationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQualificationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQualificationTypeResponse)
    Q_DISABLE_COPY(CreateQualificationTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif

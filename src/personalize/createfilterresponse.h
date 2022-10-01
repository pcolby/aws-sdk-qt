// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERRESPONSE_H
#define QTAWS_CREATEFILTERRESPONSE_H

#include "personalizeresponse.h"
#include "createfilterrequest.h"

namespace QtAws {
namespace Personalize {

class CreateFilterResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateFilterResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateFilterResponse(const CreateFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFilterResponse)
    Q_DISABLE_COPY(CreateFilterResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif

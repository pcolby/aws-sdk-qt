// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELUNACLIENTRESPONSE_H
#define QTAWS_CREATELUNACLIENTRESPONSE_H

#include "cloudhsmresponse.h"
#include "createlunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateLunaClientResponsePrivate;

class QTAWSCLOUDHSM_EXPORT CreateLunaClientResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    CreateLunaClientResponse(const CreateLunaClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLunaClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLunaClientResponse)
    Q_DISABLE_COPY(CreateLunaClientResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTRESPONSE_H
#define QTAWS_CREATEGRANTRESPONSE_H

#include "kmsresponse.h"
#include "creategrantrequest.h"

namespace QtAws {
namespace Kms {

class CreateGrantResponsePrivate;

class QTAWSKMS_EXPORT CreateGrantResponse : public KmsResponse {
    Q_OBJECT

public:
    CreateGrantResponse(const CreateGrantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGrantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGrantResponse)
    Q_DISABLE_COPY(CreateGrantResponse)

};

} // namespace Kms
} // namespace QtAws

#endif

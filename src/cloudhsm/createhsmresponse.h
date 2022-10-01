// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMRESPONSE_H
#define QTAWS_CREATEHSMRESPONSE_H

#include "cloudhsmresponse.h"
#include "createhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateHsmResponsePrivate;

class QTAWSCLOUDHSM_EXPORT CreateHsmResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    CreateHsmResponse(const CreateHsmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHsmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHsmResponse)
    Q_DISABLE_COPY(CreateHsmResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

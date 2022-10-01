// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMRESPONSE_H
#define QTAWS_CREATEHSMRESPONSE_H

#include "cloudhsmv2response.h"
#include "createhsmrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class CreateHsmResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT CreateHsmResponse : public CloudHsmV2Response {
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

} // namespace CloudHsmV2
} // namespace QtAws

#endif

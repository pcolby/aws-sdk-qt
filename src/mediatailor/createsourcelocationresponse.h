// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOURCELOCATIONRESPONSE_H
#define QTAWS_CREATESOURCELOCATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "createsourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateSourceLocationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT CreateSourceLocationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    CreateSourceLocationResponse(const CreateSourceLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSourceLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSourceLocationResponse)
    Q_DISABLE_COPY(CreateSourceLocationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

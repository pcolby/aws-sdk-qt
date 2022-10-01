// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLUNACLIENTRESPONSE_H
#define QTAWS_MODIFYLUNACLIENTRESPONSE_H

#include "cloudhsmresponse.h"
#include "modifylunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyLunaClientResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ModifyLunaClientResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ModifyLunaClientResponse(const ModifyLunaClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyLunaClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLunaClientResponse)
    Q_DISABLE_COPY(ModifyLunaClientResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
